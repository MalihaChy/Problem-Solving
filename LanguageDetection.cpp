#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a="HELLO",b="HOLA",c="HALLO",d="BONJOUR",e="CIAO",f="ZDRAVSTVUJTE",x;
    int j=1;
    while(1)
    {
        cin>>x;
        if(x=="#")
            break;
        if(x==a)
            printf("Case %d: ENGLISH\n",j++);
        else
        {
            if(x==b)
                printf("Case %d: SPANISH\n",j++);
            else
            {
                if(x==c)
                    printf("Case %d: GERMAN\n",j++);
                else
                {
                    if(x==d)
                        printf("Case %d: FRENCH\n",j++);
                    else
                    {
                        if(x==e)
                            printf("Case %d: ITALIAN\n",j++);
                        else
                        {
                            if(x==f)
                                printf("Case %d: RUSSIAN\n",j++);
                            else
                                printf("Case %d: UNKNOWN\n",j++);
                        }
                    }
                }
            }
        }
    }
}
