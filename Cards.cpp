#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x&1)cout<<"First Box\n";
        else{
            int first=1,second=0;
            while(1)
            {
                x=x/2;
                second++;
                if(!(x&1))
                {
                    x=x/2;
                    first++;
                    if(x&1)break;
                }
                else break;
            }
            if(second==first)cout<<"Second Box\n";
            else if(first>second)cout<<"First Box\n";
        }
    }
}
