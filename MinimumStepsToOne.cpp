#include<bits/stdc++.h>
using namespace std;
int cnt;

int func(int N)
{
    if(N==1)
        return cnt;
    if(N%3==0)
    {
        cnt++;
        func(N/3);
        return cnt;
    }
    else{
        if(N%2==0)
        {
            cnt++;
            func(N/2);
            return cnt;
        }
        else
        {
            cnt++;
            func(N-1);
            return cnt;
        }
    }
}

int main()
{
    int T,N;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf("%d",&N);
        int ans=func(N);
        printf("Case %d: %d\n",i,ans);
        cnt=0;
    }
}
