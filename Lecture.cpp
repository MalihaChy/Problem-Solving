#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<string>v[m];
    vector<string>ans;
    string a,b;
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        v[i].push_back(a);
        if(a.size()<=b.size())v[i].push_back(a);
        else v[i].push_back(b);

    }
    //for(int i=0;i<m;i++)
    //    cout<<v[i][0]<<" "<<v[i][1]<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        for(int j=0;j<m;j++)
        {
            if(v[j][0]==a){
                ans.push_back(v[j][1]);
                break;
            }
        }
    }
    cout<<ans[0];
    for(int i=1;i<n;i++)
        cout<<" "<<ans[i];
    cout<<endl;
}
