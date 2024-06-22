#include<bits/stdc++.h>
using namespace std;

bool prime_check(int x)
{
    int loop_control=sqrt(x);
    for(int i=2; i<=loop_control; i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

bool divisor(int x)
{
    int loop_control=sqrt(x);
    for(int i=2; i<=loop_control; i++)
    {
        if(x%i==0&&x/i!=i)
        {
            bool a=prime_check(i);
            bool b=prime_check(x/i);
            if(a&&b)
                return true;
        }
    }
    return false;
}

int main()
{
    int t,n;
    cin>>t;
    bool input;
    while(t--)
    {
        cin>>n;
        input=false;
        if(n<12)
            cout<<"NO\n";
        else
        {
            int x=ceil(n/2.0);
            int y=floor(n/2.0);
            while(x<n&&y>1)
            {
                bool a=divisor(x);
                bool b=divisor(y);
                if(a&&b)
                {
                    cout<<"YES\n";
                    input=true;
                    break;
                }
                else
                {
                    x++;
                    y--;
                }
            }
            if(!input)
                cout<<"NO\n";
        }
    }
}
