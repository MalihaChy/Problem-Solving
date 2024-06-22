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
        for(int i=1; i<=n; i++)
        {
            int x = ar[i];
            int ind = i;
            while(x!=0 && ind>0)
            {
                v[ind] = 1;
                ind--;
                x--;
            }
        }
        cout<<v[1];
        for(int i=2;i<=n;i++)cout<<" "<<v[i];
        cout<<endl;
    }
}
