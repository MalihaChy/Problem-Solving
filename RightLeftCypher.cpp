#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sz=s.size();
    string ans;
    int m;
    if(sz>2)
    {
        if(sz&1)//{
            m=(sz/2);
        //sz
        else m=(sz/2)-1;
        ans+=s[m];

        for(int i=0,l=m-1,r=m+1; i<m; i++)
        {
            ans+=s[r];
            ans+=s[l];
            r++;
            l--;
        }
        if(!(sz&1))ans+=s[sz-1];
        cout<<ans<<endl;
    }
    else cout<<s<<endl;
}
