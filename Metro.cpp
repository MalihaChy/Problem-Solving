#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    int ar[n+1],br[n+1];
    for(int i=1; i<=n; i++)
        cin>>ar[i];
    for(int i=1; i<=n; i++)
        cin>>br[i];
    if(ar[1]==1)
    {
        if(ar[s]==1)cout<<"YES\n";
        else if(ar[n]&&br[n]&&br[s])cout<<"YES\n";
        else if(br[s]){
            for(int i=s+1; i<=n; i++)
            {
                if(ar[i]&&br[i])
                {
                    cout<<"YES\n";
                    return 0;
                }
            }
            cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
}
