#include<bits/stdc++.h>
using namespace std;

int pos[1000000];

int main()
{
    int tc,x;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector< int >v;
        memset(pos, 0, sizeof(pos));
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>0)pos[x]=100;
            v.push_back(abs(x));
        }
        sort(v.begin(),v.end());
        int ans=1;
        int flag;
        if(pos[v[n-1]]==100)flag=0;
        else flag=1;
        for(int i=n-2;i>=0;i--){
            if(flag==0&&pos[v[i]]==0){
                flag=1;
                ans++;
            }
            else if(flag==1&&pos[v[i]]==100){
                flag=0;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
