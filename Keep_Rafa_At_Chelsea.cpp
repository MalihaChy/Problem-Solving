#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        int m;
        cin>>m;
        char str[m];
        char enter;
        for(int j=0; j<m; j++)
            cin>>str[j];
        int cnt=0;
        bool flag=true;
        for(int j=0; j+2<m;)
        {
            if(str[j]=='W'||str[j+1]=='W'||str[j+2]=='W')
                j++;
            else
            {
                flag=false;
                cnt=j+3;
                break;
            }
        }
        if(flag)
            printf("Case %d: Yay! Mighty Rafa persists!\n",i);
        else
            printf("Case %d: %d\n",i,cnt);
    }
}
