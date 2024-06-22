#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ar[m];
    for(int i=0;i<m;i++)
        cin>>ar[i];
    sort(ar,ar+m);
    cout<<(ar[n-1]-ar[0])<<endl;
}
