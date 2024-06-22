#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    int ar[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    for(int i=0;i<N;i++){
        sort(ar[i],ar[i]+N);
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ",ar[i][j]);
        }
    }
}
