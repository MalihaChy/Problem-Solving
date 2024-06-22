#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        int sz = s.size();
        stack<char>st;
        int flag = 0;
        for(int i=0; i<sz; i++)
        {
            char x = s[i];
            if(x=='('||x=='{'||x=='[')st.push(x);
            else
            {
                if(st.empty())
                {
                    flag = 1;
                    break;
                }
                else if((x==')' && st.top()!='(')||(x=='}' && st.top()!='{')||(x==']' && st.top()!='['))
                {
                    flag = 1;
                    break;
                }
                else st.pop();
            }
        }
        if(!flag && st.empty())cout<<"YES\n";
        else cout<<"NO\n";
    }
}
