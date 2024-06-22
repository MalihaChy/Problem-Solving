#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,a;
    while(getline(cin,s))
    {
        for(int i=0; s[i]; i++)
        {
            if(s[i]!=' ')
            {
                a+=s[i];
            }
            else
            {
                reverse(a.begin(),a.end());
                cout<<a<<" ";
                a.clear();
            }
        }
        reverse(a.begin(),a.end());
        cout<<a<<endl;
        a.clear();
    }
}
