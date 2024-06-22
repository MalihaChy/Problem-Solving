#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,a;
    cin>>s;
    int sz=s.size();
    if(sz<4)
        cout<<s<<endl;
    else{
    for(int i=0;i<sz;i++)
    {
        if(i+1<sz&&i+2<sz){
            if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
            {
                a+=' ';
                i+=2;
            }
            else a+=s[i];
        }
        else
            a+=s[i];
    }
    //cout<<a<<endl;
    string b;
    int j;
    for(int i=0;;i++)
    {
        if(a[i]!=' '){
            b+=a[i];
            j=i+1;
            break;
        }
    }
    sz=a.size()-2;
    for(int i=j;i<=sz;i++)
    {
        if(a[i]==' ')
        {
            if(a[i+1]!=' ')
                b+=' ';//a[i];
        }
        else
            b+=a[i];
    }
    sz++;
    if(a[sz]!=' ')b+=a[sz];
    cout<<b<<endl;
    }
}
