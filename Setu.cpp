#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    getchar();
    int taka=0;

    for(int k=1; k<=T; k++)
    {
        int n;
        cin>>n;
        getchar();
        printf("Case %d:\n",k);
        taka=0;
        while(n--)
        {

            char str[15];
            gets(str);
            if(str[0]=='r')
                printf("%d\n",taka);
            if(str[0]=='d')
            {
                char val[15];
                int j=-1;
                for(int i=7; str[i]; i++)
                {
                    j++;
                    val[j]=str[i];
                }
                val[j+1]='\0';
                int help=atoi(val);
                taka+=help;
            }
        }
    }
}

