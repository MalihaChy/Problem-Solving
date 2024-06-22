#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>r>>c;
        int cnt=0;
        for(int j=1;j<=8;j++)
        {
            int x=(r-j)*(r-j);
            for(int k=1;k<=8;k++)
            {
                if(x+(c-k)*(c-k)==5)
                    cnt++;
            }
        }
        printf("Case %d: %d\n",i,cnt);
    }
}
