#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c;
    cin>>n;
    int mishka=0, chris=0;
    while(n--)
    {
        cin>>m>>c;
        if(m>c)mishka++;
        else if(c>m)chris++;
    }
    if(mishka>chris)cout<<"Mishka\n";
    else if(chris>mishka)cout<<"Chris\n";
    else cout<<"Friendship is magic!^^\n";
}
