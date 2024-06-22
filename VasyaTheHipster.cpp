#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int x,y;
    x=min(a,b);
    y=(a-x)+(b-x);
    cout<<x<<" "<<y/2<<endl;
}
