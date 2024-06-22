#include<bits/stdc++.h>
using namespace std;

int ar[100010];

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n!=0)
        {
            ar[0]=0;
            ar[1]=1;
            int ans=1;
            for(int i=2;i<=n;i++)
            {
                if(i&1)
                {
                    ar[i]=ar[i/2]+ar[(i/2)+1];
                }
                else{
                    ar[i]=ar[i/2];
                }
                ans=max(ans,ar[i]);
            }
            cout<<ans<<endl;
        }
        else
            break;
    }
}
