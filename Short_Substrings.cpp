#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a, b;
        cin>>b;
        int sz = b.size();
        a = b[0];
        a += b[1];
        for(int i=3;i<sz;i+=2)a+=b[i];
        cout<<a<<endl;
    }
}
