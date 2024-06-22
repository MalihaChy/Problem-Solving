#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    n--;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[i+1]){
            cout<<"YES\n"<<s[i]<<s[i+1]<<endl;
            return 0;
        }
    }
    cout<<"NO\n";
}
