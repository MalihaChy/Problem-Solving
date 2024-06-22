#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, temp;
    getline(cin, s);
    vector<string>v;
    int sz = s.size();
    for(int i=0; i<sz; i++)
    {
        if(s[i]==' ')
        {
            v.push_back(temp);
            temp = "";
        }
        else temp+=s[i];
    }
    v.push_back(temp);
    sz = v.size();
    for(int i=sz-1;i>=0;i--)cout<<v[i]<<" ";
    cout<<endl;
}
