#include<bits/stdc++.h>
using namespace std;

long long bigmod(long long a,long long b,long long M){

}

int main()
{
    int T;
    long long a,b,c;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        long long result=bigmod(a,b,c);
        printf("Case %d: %lld\n",i,result);
    }
}
