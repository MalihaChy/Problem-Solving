#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    string s;
    cin>>s>>n;
    int cnt = 0;
    int sz = s.size();
    for(int i=0;i<sz;i++){
        if(s[i]=='a')cnt++;
    }
    long long ans = (n/sz)*cnt;
    sz = n%sz;
    for(int i=0;i<sz;i++)
    {
        if(s[i]=='a')ans++;
    }
    cout<<ans<<endl;
}
