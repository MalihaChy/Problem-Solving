#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[10];
    gets(str);
    int cnt=0;
    for(int i=0; str[i]; i++)
    {
        if(str[i]=='4'||str[i]=='7')
            cnt++;
    }
    if(cnt==strlen(str))
    {
        cout<<"YES\n";
    }
    else
    {
        cnt=atoi(str);
        if(cnt%4==0||cnt%7==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
