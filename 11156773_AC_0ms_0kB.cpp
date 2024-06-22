#include<bits/stdc++.h>
using namespace std;

int bigmod(int a,int b,int M){
    if(b==0)
        return 1;
    if(b%2==0){
        int x=bigmod(a,b/2,M);
        x=((x%M)*(x%M))%M;
        return x;
    }
    else{
        int x=bigmod(a,b-1,M);
        x=((a%M)*(x%M))%M;
        return x;
    }
}

int main()
{
    int a,b,M,c;
    while(scanf("%d%d%d",&a,&b,&M)!=EOF){
        scanf("%c%c",&c,&c);
        int ans=bigmod(a,b,M);
        printf("%d\n",ans);
    }
}
