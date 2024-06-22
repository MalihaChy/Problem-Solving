#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n+1], v[n+1];
        for(int i=1; i<=n; i++)cin>>ar[i];
        memset(v, 0, sizeof(v));

        int x = 0;
        for(int i=n; i>=1; i--)
        {
            x = max(ar[i], x);
            if(x!=0)
            {
                v[i]=1;
                x--;
            }
        }

        cout<<v[1];
        for(int i=2; i<=n; i++)cout<<" "<<v[i];
        cout<<endl;
    }
}
