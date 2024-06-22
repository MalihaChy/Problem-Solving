#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a=0, d=0;
    char x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x=='A')a++;
        else d++;
    }
    if(a==d)cout<<"Friendship\n";
    else if(a>d)cout<<"Anton\n";
    else cout<<"Danik\n";
}
