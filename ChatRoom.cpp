#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,a="hello",b;
    cin>>s;
    int sz=s.size();
    int x=0,k=0;
    for(int i=0;i<sz;i++)
    {
        for(int j=x;j<sz;j++)
        {
            if(s[j]==a[k])
            {
                x=j+1;
                k++;
                b+=s[j];
                break;
            }
        }
        if(k==5)
            break;
    }
    if(k==5)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
