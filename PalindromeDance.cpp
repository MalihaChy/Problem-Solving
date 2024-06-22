#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int ar[n],br[n];
    bool isPalindrome=true;
    for(int i=0,j=n-1; i<n; i++,j--)
    {
        cin>>ar[i];
        br[j]=ar[i];
        if(ar[i]==2)isPalindrome=false;
    }
    if(isPalindrome){
        for(int i=0;i<n;i++)
        {
            if(ar[i]!=br[i]){
                cout<<-1<<endl;
                return 0;
            }
        }
        cout<<0<<endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(ar[i]!=br[i]&&ar[i]!=2&&br[i]!=2)
            {
                cout<<-1<<endl;
                return 0;
            }
        }
        int ans=0;
        int small=min(a,b);
        for(int i=0; i<n; i++)
        {
            if(ar[i]==br[i]&&ar[i]==2)ans+=small;
            if(ar[i]!=br[i]&&ar[i]==2)
            {
                if(br[i]==0)ans+=a;
                else if(br[i]==1)ans+=b;
            }
        }
        cout<<ans<<endl;
    }

}
