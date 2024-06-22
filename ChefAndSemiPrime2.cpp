#include<bits/stdc++.h>
using namespace std;

bool prime_check(int y)
{
    int d=y/2;
    for(int i=2;i<=d;i++)
    {
        if(y%i==0)
            return false;
    }
    return true;
}

bool divisor(int x)
{
    int c=x/2;
    for(int i=2;i<=c;i++)
    {
        if(x%i==0&&i!=x/i)
        {
            bool f=prime_check(x/i);
            bool s=prime_check(i);
            if(f&&s)
                return true;
        }
    }
    return false;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool flag=false;
        if(n<12)
            cout<<"NO\n";
        else{
            for(int i=6;i<n;i++)
            {
                int a=n-i;
                int b=i;

                bool first=divisor(a);
                bool second=divisor(b);
                if(first&&second)
                {
                    cout<<"YES\n";
                    flag=true;
                    break;
                }
            }
            if(flag==false)
                cout<<"NO\n";
        }
    }
}
