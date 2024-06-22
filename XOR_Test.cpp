#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int ar[n];
        for(int i=0; i<n; i++)
            scanf("%d",&ar[i]);
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                v.push_back(ar[i] ^ ar[j]);
            }
        }
        int tem=0;
        for(int i=0; i<v.size(); i++)
            tem^=v[i];
            //v[i+1]=(v[i]^v[i+1]);
        //cout<<v[v.size()-1]<<endl;
        cout<<tem<<endl;
        cout<<v.size();
    }
}
