#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF)
        cout<<abs(a-b)<<endl;
}


int main()
{
    long long a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(a>b)
            cout<<a-b<<endl;
        else
            cout<<b-a<<endl;
    }
}
