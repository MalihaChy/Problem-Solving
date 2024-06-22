#include<bits/stdc++.h>
using namespace std;

//int ar[100010];

int main()
{
    int t;
    int n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>a,b;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            a.push_back(x);
            b.push_back(x);
        }
        sort(b.begin(),b.end());
        x=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
                break;
            else
                x++;
        }
        if(x==n)
            cout<<"YES\n";
        else
        {
            for(int i=0;i<n;i++)
            {
                a.push_back(a[0]);
                a.erase(a.begin()+0);
                x=0;
                for(int j=0;j<n;j++)
                {
                    if(a[j]!=b[j])
                        break;
                    else
                        x++;
                }
                if(x==n)
                {
                    cout<<"YES\n";
                    break;
                }
            }
            if(x!=n)
                cout<<"NO\n";
        }
    }
}
