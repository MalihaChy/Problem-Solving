#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,M,K;
    scanf("%d%d%d",&N,&M,&K);
    int ar[N];
    for(int i=0;i<N;i++)
        scanf("%d",&ar[i]);
    sort(ar,ar+N);
    int ans=0;

  //  for

    int val=0;
   /* int A[K];
    for(int i=ar[0];;){
        int j;
        for(j=0;j<K;j++,i++)
            A[j]=i;
        ans++;
        if(A[j]>ar[N-1])
            break;
    }

    */
    for(int i=ar[0];;i++){
        val=i+K-1;
        ans++;
        if(val>=ar[N-1] && i==ar[N-1]){
            printf("%d\n",ans);
            return 0;
        }
    }


}
