#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cin>>p;
    while(p--)
    {
        string s;
        cin>>s;
        int sz = s.size();
        int ar[26];
        memset(ar, 0, sizeof(ar));
        for(int i=0;i<sz;i++)
        {
            ar[s[i]-'a']++;
        }
        cin>>s;
        int flag = 0;
        sz = s.size();
        for(int i=0;i<sz;i++)
        {
            if(ar[s[i]-'a']!=0)
            {
                flag = 1;
                break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
