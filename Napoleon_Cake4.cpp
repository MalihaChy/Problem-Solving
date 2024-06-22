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
        for(int i=1; i<=n; i++)v[i]=1;
        for(int i=n; i>=1;)
        {
            int x = ar[i];
            if(x>0)i-=x;
            else
            {
                v[i]=0;
                i--;
            }
        }
        cout<<v[1];
        for(int i=2; i<=n; i++)cout<<" "<<v[i];
        cout<<endl;
    }
}
