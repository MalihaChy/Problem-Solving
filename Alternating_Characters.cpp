#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int flag;
        if(s[0]=='A')flag=1;
        else flag=0;
        int sz=s.size();
        int cnt=0;
        for(int i=0;i<sz;i++)
        {
            if(s[i]=='A'&&flag)flag=0;
            else if(s[i]=='B'&&!flag)flag=1;
            else cnt++;
        }
        cout<<cnt<<endl;
    }
}
