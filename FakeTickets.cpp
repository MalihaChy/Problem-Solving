#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int x;
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)return 0;
        int ar[n+1];
        memset(ar,0,sizeof(ar));
        int cnt=0;
        while(m--)
        {
            cin>>x;
            ar[x]++;
        }
        for(int i=0;i<=n;i++)
        {
            if(ar[i]>1)cnt++;
        }
        cout<<cnt<<endl;
    }
}
