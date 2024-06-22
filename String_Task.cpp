#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[110],ans[310];
    gets(str);
    int j=0;
    for(int i=0;str[i];i++){
        str[i]=tolower(str[i]);
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y'){
            ans[j]='.';
            j++;
            ans[j]=str[i];
            j++;
        }
    }
    ans[j]='\0';
    puts(ans);
}
