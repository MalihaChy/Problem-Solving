#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    int ans=0;
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&x);
        if(x%b==0||x%c==0)ans++;
    }
    cout<<ans<<"\n";
}
