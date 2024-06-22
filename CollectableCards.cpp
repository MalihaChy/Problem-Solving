#include<bits/stdc++.h>
using namespace std;

int find_gcd(int a,int b)
{
    if(a%b==0)return b;
    find_gcd(b,a%b);
}

int main()
{
    int n,f1,f2;
    cin>>n;
    while(n--)
    {
        cin>>f1>>f2;
        /*if(f1==f2)cout<<f1<<endl;
        else if(f1>f2)swap(f1,f2);
        for(int i=f1; i>0; i--)
        {
            if(f2%i==0&&f1%i==0)
            {
                cout<<i<<endl;
                break;
            }
        }*/
        //cout<<find_gcd(f1,f2)<<endl;
        cout<<__gcd(f1,f2)<<endl;
    }
}
