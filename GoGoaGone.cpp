#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[8];
    for(int i=7;i>=0;i--)
        cin>>ar[i];
    int p,x,y,money=0;
    cin>>p;
    vector<int>fight[8];
    while(p--)
    {
        cin>>x>>y;
        fight[x].push_back(y);
        fight[y].push_back(x);
    }
    for(int i=0;i<8;i++)
    {
        int sz=fight[i].size();
        int sum=0;
        for(int j=0;j<sz;j++)
        {
            sum+=(ar[v[i][j]]);
        }
        if(sum<ar[i])
            money+=ar[i];
        else
            money+=sum;
    }
}
