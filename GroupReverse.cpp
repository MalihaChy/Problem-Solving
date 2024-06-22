#include<bits/stdc++.h>
using namespace std;

int main()
{
    string c="1254";
    int a=c[2]-48;
    int b=c[3]-48;
    cout<<a<<" "<<b<<endl<<a+b<<endl;
    string x="ZYXW";
    sort(x.begin(),x.end());
    cout<<x<<endl;
    int ans=pow(a,b);
    ans+=pow(a,b);
    cout<<ans;
}
