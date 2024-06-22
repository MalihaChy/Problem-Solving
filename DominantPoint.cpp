#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    int ar1[N],ar2[N];
    int mx=0,my=0,x=10,y=20;
    for(int i=0;i<N;i++){
        scanf("%d",&ar1[i]);
        scanf("%d",&ar2[i]);
        if(ar1[i]>mx){
            mx=ar1[i];
            x=i;
        }
        if(ar2[i]>my){
            my=ar2[i];
            y=i;
        }
    }
    if(x==y)
        printf("%d\n",x+1);
    else
        printf("-1\n");
}
