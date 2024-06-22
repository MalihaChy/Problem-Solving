#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int sz = s.size()/2;
    bool flag = true;
    for(int i=0, j=s.size()-1; i<=sz; i++, j--)
    {
        if(s[i]!=s[j])
        {
            flag = false;
            break;
        }
    }
    if(flag)cout<<"Palindrome\n";
    else cout<<"Not Palindrome\n";
}
