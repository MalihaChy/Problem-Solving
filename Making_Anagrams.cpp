#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin>>a>>b;
    int sz = a.size();
    int a1[26], b1[26];
    memset(a1, 0, sizeof(a1));
    memset(b1, 0, sizeof(b1));
    for(int i=0;i<sz;i++)a1[a[i]-'a']++;
    sz = b.size();
    for(int i=0;i<sz;i++)b1[b[i]-'a']++;
    int cnt = 0;
    for(int i=0;i<26;i++)cnt+=(abs(a1[i]-b1[i]));
    cout<<cnt<<endl;
}
