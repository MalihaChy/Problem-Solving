#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans;
    for(int i=0,j=0;i<n;i+=j){
        ans+=s[i];
        j++;
    }
    cout<<ans<<endl;
}
