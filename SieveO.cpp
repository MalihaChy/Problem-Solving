#include<bits/stdc++.h>
using namespace std;

int ar[1000007];

int main()
{
    int T,M,N;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&M,&N);
        ar[0]=1;
        ar[1]=1;

        for(int i=4;i<=N;i+=2)
            ar[i]=1;
        for(int i=3;i*i<=N;i+=2){
            if(ar[i]==0){
                for(int j=i*i;j<=N;j+=(2*i))
                    ar[j]=1;
            }
        }

        long long sum=0;
        for(int i=M;i<=N;i++){
            if(ar[i]==0)
                sum+=i;
        }
        printf("%lld\n",sum);
    }
}
