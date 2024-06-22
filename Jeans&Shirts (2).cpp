#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,M,K;
    scanf("%d%d%d",&N,&M,&K);
    int ar1[N],ar2[M];
    int cnt=0;
    for(int i=0;i<N;i++)
        scanf("%d",&ar1[i]);
    for(int i=0;i<M;i++)
        scanf("%d",&ar2[i]);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(abs(ar1[i]-ar2[j])>=K)
                cnt++;
        }
    }
    printf("%d\n",cnt);
}
