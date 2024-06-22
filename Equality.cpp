#include<bits/stdc++.h>
using namespace std;

/*
int main()
{
    char str[15];
    scanf("%s",&str);
    //gets(str);
    printf(str);
    int a=str[0]-48;
    int b=str[4]-48;
    int c=str[8]-48;
  /*  if((str[0]+str[4])-48==str[8])
        cout<<"YES\n";
    else
        cout<<"NO\n";
    if(a+b==c)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
*/

int main()
{
    string s;
    cin>>s;
    if((s[0]+s[4])-48==s[8])
        cout<<"YES\n";
    else
    cout<<"NO\n";
}
