#include<bits/stdc++.h>
using namespace std;

long long ar[35];

void calculation()
{
    ar[0]=5;
    for(int i=1;i<=30;i++)
        ar[i]=5*pow(2,i)+ar[i-1];
    for(int i=0;i<=30;i++)
        cout<<ar[i]<<" ";

}

int main()
{
    long long n;
    calculation();
    cin>>n;
    for(int i=0;i<=30;i++)
    {
        if(n==ar[i])cout<<"Howard\n";
        else if(n>ar[i]&&n<ar[i+1]){
            if((n%pow(2,(i+1)))==1)cout<<"Sheldon\n";
            else if((n%pow(2,(i+1)))==2)cout<<"Leonard\n";
            else if((n%pow(2,(i+1)))==3)cout<<"Penny\n";
            else if((n%pow(2,(i+1)))==2)cout<<"Rajesh\n";
        }
    }
}
