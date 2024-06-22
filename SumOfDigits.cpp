#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int sz=s.size();
        int sum=0;
        for(int i=0;i<sz;i++)
            sum+=(s[i]-48);
        cout<<sum<<endl;
    }
}
