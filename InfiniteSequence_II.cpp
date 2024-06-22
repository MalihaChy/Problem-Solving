#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=abs(a-b);
    if(c==0){
        if(a==b)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else if(b<a&&c>0)cout<<"NO\n";
    else if(a<b&&c<0)cout<<"NO\n";
    else if(x%c==0)cout<<"YES\n";
    else cout<<"NO\n";
}
