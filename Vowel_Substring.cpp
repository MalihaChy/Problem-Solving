#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin>>s>>k;
    int sz = s.size()-k;
    int mx = 0, ind = -1;
    for(int i=0;i<=sz;i++)
    {
        int cnt = 0;
        for(int j=0;j<k;j++)
        {
            char x = s[i+j];
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')cnt++;
        }
        if(cnt>mx)
        {
            mx = cnt;
            ind = i;
        }
    }
    if(ind!=(-1))for(int i=0;i<k;i++)cout<<s[ind+i];
    else cout<<"Not found!\n";
    cout<<endl;
}
