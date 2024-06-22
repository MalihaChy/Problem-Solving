#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[110];
    gets(str);
    int up=0,low=0;
    for(int i=0; str[i]; i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            up++;
        else
        {
            if(str[i]>='a'&&str[i]<='z')
                low++;
        }
    }
    if(up>low)
        cout<<strupr(str)<<endl;
    else
        cout<<strlwr(str)<<endl;
}
