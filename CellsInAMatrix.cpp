#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x, y;
    cin>>n>>k;
    int ar[n][n];
    memset(ar, 0, sizeof(ar));
    vector<int>v;
    for(int z=0;z<k;z++)
    {
        cin>>x>>y;
        x--;
        y--;
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            ar[x][i]=1;
            ar[i][y]=1;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(ar[i][j]==0)cnt++;
            }
        }
        v.push_back(cnt);
    }
    cout<<v[0];
    for(int z=1;z<k;z++)cout<<" "<<v[z];
    cout<<endl;
}
