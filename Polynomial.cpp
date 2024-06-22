#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long ar[2*n+1];
        //vector<int>ar;
        //int m=2*n;
        //for(int i=0;i<=m;i++)ar.push_back(0);
        memset(ar,0,sizeof(ar));
        int a[n+1],b[n+1];
        //int dem[n+1];
        for(int i=n;i>=0;i--)
            cin>>a[i];
        for(int i=n;i>=0;i--)
            cin>>b[i];
        for(int i=n;i>=0;i--)
        {
            for(int j=n;j>=0;j--)
            {
                ar[i+j]+=(a[i]*b[j]);
            }
        }
        cout<<ar[n*2];
        for(int i=n*2;i>=0;i--)
            cout<<" "<<ar[i];
        cout<<endl;
    }
}
