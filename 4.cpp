#include<bits/stdc++.h>
using namespace std;

/*
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int big=max(n,m);
    int small=min(n,m);
    if(small&1)small=(small/2)+1;
    else small=small/2;
    printf("%d\n",big*small);
}
*/

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int ans,x=n;
    if(n&1)n=ceil(n/2.0);
    else n=floor(n/2.0);
    ans=n*m;
    if(m&1)m=ceil(m/2.0);
    else m=floor(m/2.0);
    ans=max(ans,m*x);
    printf("%d\n",ans);
}
