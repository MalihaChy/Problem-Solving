#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s,ans;
    cin>>s;
    n--;
    for(int i=0;i<n;i++)
        ans+=min(s[i],s[i+1]);
    cout<<ans<<endl;
}
