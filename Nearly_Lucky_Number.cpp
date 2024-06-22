#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[25];
    gets(str);
    int cnt=0;
    for(int i=0; str[i]; i++)
    {
        if(str[i]=='4'||str[i]=='7')
            cnt++;
    }
    char res[20];
    itoa(cnt,res,10);
    int flag=0;
    for(int i=0; res[i]; i++)
    {
        if(res[i]!='4'&&res[i]!='7')
        {
            flag=1;
            break;
        }
    }
    if(!flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
