#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)cin>>ar[i];
        vector<int>v;
        int cnt = n-1;
        for(int i=cnt; i>=0; i--)
        {
            if(i==cnt)
            {
                int x = ar[i];
                if(x==0){
                    v.push_back(0);
                    cnt--;
                }
                else
                {
                    cnt -= x;
                    while(x--)v.push_back(1);
                }
            }
        }
        int sz = n-1;
        cout<<v[sz];
        for(int i=sz-1;i>=0;i--)cout<<" "<<v[i];
        cout<<endl;
    }
}
