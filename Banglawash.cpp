#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n,b=0,w=0,t=0,a=0;
        cin>>n;
        string s;
        cin>>s;
        for(int j=0; s[j]; j++)
        {
            if(s[j]=='A')
                a++;
            else
            {
                if(s[j]=='W')
                    w++;
                else
                {
                    if(s[j]=='T')
                        t++;
                    else
                    {
                        if(s[j]=='B')
                            b++;
                    }
                }
            }
        }
        if(a==n)
            printf("Case %d: ABANDONED\n",i);
        else
        {
            if(w+a==n)
                printf("Case %d: WHITEWASH\n",i);
            else
            {
                if(a+b==n)
                    printf("Case %d: BANGLAWASH\n",i);
                else
                {
                    if(b==w)
                        printf("Case %d: DRAW %d %d\n",i,w,t);
                    else
                    {
                        if(b>w)
                            printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
                        else
                        {
                            if(w>b)
                                printf("Case %d: WWW %d - %d\n",i,w,b);
                        }
                    }
                }
            }
        }
    }
}
