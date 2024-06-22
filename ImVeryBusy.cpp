



#include<bits/stdc++.h>

using namespace std;

struct act
{
    int st;
    int et;
}c[100006];

bool cmp(act a,act b)
{
    if(a.et==b.et)
        return a.st<b.st;
    else
        return a.et<b.et;
}



int main()
{
    int T,N;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        for(int i=0;i<N;i++){
            scanf("%d",&c[i].st);
            scanf("%d",&c[i].et);
        }
        sort(c,c+N,cmp);
        int ans=0,prev=-1;
        for(int i=0;i<N;i++){
            if(c[i].st>=prev){
                ans++;
                prev=c[i].et;
            }
        }
        printf("%d\n",ans);
    }
}







