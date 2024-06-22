#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c,d;
    int sz;
    while(cin>>a)
    {
        sz=a.size();
        for(int i=0;i<sz;)
        {
            if(a[i]=='['){
                i++;
                while(a[i]!=']'&&i<sz&&a[i]!='[')
                {
                    b+=a[i];
                    i++;
                }
            }
            if(a[i]==']'||i>=sz||a[i]=='['){
                c=b+c;
                b.clear();
            }
            if(a[i]!='['&&a[i]!=']'){
                c+=a[i];
                i++;
            }
            b.clear();
        }
        cout<<c<<endl;
        c.clear();
    }
}
