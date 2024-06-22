#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string a,b;
        getline(cin,a);
        getline(cin,b);
        if(a.size()!=b.size())
            cout<<"No\n";
        else
        {
            for(int i=0; a[i]; i++)
            {
                if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
                    a[i]='A';
                if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
                    b[i]='A';
            }
            if(a==b)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
}
