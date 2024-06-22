#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[1050];
        cin>>str;
        stack<char>s;
        s.push('#');
        int cnt=0;
        for(int i=0; str[i]; i++)
        {
            if(str[i]=='<')
            {
                s.push('<');
            }
            else
            {
                if(str[i]=='>')
                {
                    if(s.top()=='<')
                    {
                        s.pop();
                        cnt++;
                    }
                }
            }
        }
        cout<<cnt<<endl;
        while(!s.empty())
            s.pop();
    }
}
