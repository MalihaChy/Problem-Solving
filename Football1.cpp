#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a,b,c;
    int x=0,y=0;
    cin>>a;
    x++;
    n--;
    while(n--)
    {
        cin>>b;
        if(a==b)x++;
        else{
            y++;
            c=b;
        }
    }
    if(x>y)cout<<a<<endl;
    else cout<<c<<endl;
}
