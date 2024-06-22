#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,x;
    vector<string>v;
    cin>>s;
    for(int i=1;i<=5;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<5;i++)
    {
        if(s[0]==v[i][0]||s[1]==v[i][1]){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
}
