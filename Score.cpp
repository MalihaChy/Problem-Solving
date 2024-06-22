#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    string s;
    while(tc--)
    {
        cin>>s;
        int ans = 0;
        int cnt = 0;
        int sz = s.size();
        for(int i = 0; i<sz; i++)
        {
            if(s[i]=='O')
            {
                cnt++;
                ans+=cnt;
            }
            else cnt = 0;
        }
        cout<<ans<<endl;
    }
}
