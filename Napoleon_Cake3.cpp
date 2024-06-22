#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n+1], v[n+1];
        for(int i=n; i>=1; i--)cin>>ar[i];
        for(int i=0; i<=n; i++)v[i]=1;
        for(int i=1; i<=n;)
        {
            if(ar[i]==0)
            {
                v[i]=0;
                i++;
            }
            else
                i+=ar[i];
        }
        cout<<v[n];
        for(int i=n-1; i>=1; i--)cout<<" "<<v[i];
        cout<<endl;
    }
}
