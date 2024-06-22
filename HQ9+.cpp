#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[110];
    gets(str);
    int flag=0;
    for(int i=0;str[i];i++){
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
            cout<<"YES\n";
            flag=1;
            break;
        }
    }
    if(!flag)
        cout<<"NO\n";
}
