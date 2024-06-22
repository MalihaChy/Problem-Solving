#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int px, py;
        cin>>px>>py;
        cin>>s;
        int u = 0, d = 0, l = 0, r = 0;
        int sz = s.size();
        for(int i = 0; i<sz; i++)
        {
            if(s[i] == 'U')u++;
            else if(s[i] == 'D')d++;
            else if(s[i] == 'L')l++;
            else if(s[i] == 'R')r++;
        }
        int flag = 0;
        if((px>0 && r>=px) || (px<0 && l>=abs(px)) || px == 0)flag = 1;
        if(flag == 1 && ((py>0 && u>=py) || (py<0 && d>=abs(py)) || py == 0))flag = 2;
        if(flag == 2)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
