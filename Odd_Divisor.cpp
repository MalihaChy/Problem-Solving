#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long n;
    while(t--)
    {
        cin>>n;
        if(n%2 == 1)cout<<"YES\n";
        else
        {
            int flag = 0;
            while(n)
            {
                if(n%2 == 1 && n!= 1)
                {
                    flag = 1;
                    cout<<"YES\n";
                    break;
                }
                else
                {
                    n = n/2;
                }
            }
            if(flag == 0)cout<<"NO\n";
        }
    }
}
