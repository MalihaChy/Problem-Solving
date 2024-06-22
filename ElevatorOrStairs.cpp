#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,a,b,c;
    cin>>x>>y>>z>>a>>b>>c;
    int stair=abs(x-y)*a;
    int lift=(abs(x-z)+abs(x-y))*b+(3*c);
    if(lift<=stair)cout<<"YES\n";
    else cout<<"NO\n";
}
