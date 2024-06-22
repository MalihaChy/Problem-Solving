#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    if(n<26)cout<<"NO\n";
    else{
        bool ar[26];
        memset(ar,false,sizeof(ar));
        transform(s.begin(),s.end(),s.begin(),::toupper);
        //cout<<s<<endl;
        for(int i=0;i<n;i++)
        {
            ar[s[i]-'A']=true;
            //cout<<s[i]-'A'<<endl;
        }
        for(int i=0;i<26;i++)
        {
            if(ar[i]==false)
            {
                cout<<"NO\n";
                return 0;
            }
        }
        cout<<"YES\n";
    }
}
