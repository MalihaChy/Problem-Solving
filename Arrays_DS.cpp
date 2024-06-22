#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    reverse(v.begin(), v.end());
    cout<<v[0];
    for(int i=1; i<n; i++)cout<<" "<<v[i];
    cout<<endl;
}
