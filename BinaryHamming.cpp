#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("hamming.in","r",stdin);
    int t,n;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>n;
        string a,b;
        cin>>a>>b;
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i]){
                if(i+1<n){
                    if(a[i+1]==b[i+1]&&a[i]!=a[i+1]){
                        ans+=2;
                        i++;
                    }
                    else if(a[i+1]!=b[i+1]){
                        ans+=1;
                        i++;
                    }
                }
            }
            else if(a[i]!=b[i])
                ans++;
        }
        cout<<ans<<endl;
    }
}
