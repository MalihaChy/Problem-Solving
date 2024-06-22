#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n;
    int flag = 0;
    while(n--)
    {
        cin>>x;
        if(x==1)flag = 1;
    }
    if(flag==1)cout<<"HARD\n";
    else cout<<"EASY\n";
}
