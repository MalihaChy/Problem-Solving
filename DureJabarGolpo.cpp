#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j;
        cin>>n>>j;
        int ar[n];
        vector<int>v,v2;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            if(ar[i]>j)
                v.push_back(i+1);
            else
                v2.push_back(i+1);
        }
        cout<<"Kache Eso\n";
        if(v.empty())
            cout<<endl;
        else
        {
            cout<<v[0];
            for(int i=1; i<v.size(); i++)
                cout<<" "<<v[i];
            cout<<endl;
        }
        cout<<"Dure Giya Mor\n";
        if(v2.empty())
            cout<<endl;
        else
        {
            cout<<v2[0];
            for(int i=1; i<v2.size(); i++)
                cout<<" "<<v2[i];
            cout<<endl;
        }
    }
}
