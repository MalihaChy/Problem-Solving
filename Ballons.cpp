#include<bits/stdc++.h>
using namespace std;

int ar[1000];

int main()
{
    int n,sum_all=0;
    cin>>n;
    cin>>ar[0];
    for(int i=1; i<n; i++)
    {
        cin>>ar[i];
        sum_all+=ar[i];
    }
    if(n==1||sum_all==ar[0]&&n==2)
        cout<<"-1\n";
    else
    {
        if(sum_all==ar[0]&&n>2)
            cout<<2<<endl<<"1 2\n";
        else
            cout<<1<<endl<<1<<endl;
    }
}
