#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    int ar[26];
    memset(ar,0,sizeof(ar));
    for(int i=0;c[i];i++)
        ar[c[i]-'A']++;
    for(int i=0;a[i];i++)
        ar[a[i]-'A']--;
    for(int i=0;b[i];i++)
        ar[b[i]-'A']--;
    for(int i=0;i<26;i++)
    {
        if(ar[i]!=0){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
}
