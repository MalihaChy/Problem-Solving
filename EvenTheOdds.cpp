#include<bits/stdc++.h>
using namespace std;

long long odd[1000006];
long long even[1000006];

int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        long long N,M;
        scanf("%lld%lld",&N,&M);
        if(M!=1)
            odd[1]=1;
        for(int i=2;i<=1000000;i+=2){
            odd[i]=((odd[i-2]%M)+(i%M))%M;
        }
        for(int i=3;i<=1000000;i+=2){
            odd[i]=((odd[i-2]%M)+(i%M))%M;
        }
        if(N>1000000){
            odd[1000000]+
            for(long long i=1000001;i<=N;i++){

            }
        }
        if(N&1)
            printf("%lld %lld\n",odd[(N*2)-1],odd[N*2]);
        else
            printf("%lld %lld\n",odd[(N*2)-1],odd[N*2]);
    }
}
