#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    int T;
    cin>>T;
    for(int m=1; m<=T; m++)
    {
        char ch,CH;
        cin>>r>>c;
        char ar[r][c];
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>ch;
                ar[i][j]=ch;
            }
        }
        int a,b;
        int ANS=0;
        ch='0';
        CH='0';
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                int ans=0;
                if(ar[i][j]>='A'&&ar[i][j]<='Z')
                {
                    a=i-1;
                    b=j-1;
                    if(a>=0 && b>=0)
                    {
                        if(ar[a][b]=='*')
                            ans++;
                    }
                    a=i-1;
                    b=j;
                    if(a>=0 && b>=0)
                    {
                        if(ar[a][b]=='*')
                            ans++;
                    }
                    a=i-1;
                    b=j+1;
                    if(a>=0 && b<=c)
                    {
                        if(ar[a][b]=='*')
                            ans++;
                    }
                    a=i;
                    b=j+1;
                    if(a>=0 && b<=c)
                    {
                        if(ar[a][b]=='*')
                            ans++;
                    }
                    a=i+1;
                    b=j+1;
                    if(a<=r && b<=c)
                    {
                        if(ar[a][b]=='*')
                            ans++;
                    }
                    a=i+1;
                    b=j;
                    if(a<=r && b>=0)
                    {
                        if(ar[a][b]=='*')
                            ans++;
                    }
                    a=i+1;
                    b=j-1;
                    if(a<=r && b>=0)
                    {
                        if(ar[a][b]=='*')
                            ans++;
                    }
                    a=i;
                    b=j-1;
                    if(a>=0 && b>=0)
                    {
                        if(ar[a][b]=='*')
                            ans++;
                    }
                    if(ans>ANS)
                    {
                        ANS=ans;
                        CH=ar[i][j];
                    }
                    else
                    {
                        if(ans!=0 && ans==ANS)
                        {
                            if(CH>ar[i][j])
                                CH=ar[i][j];
                        }
                    }
                }

            }
        }
        if(ANS>0)
            printf("%c\n",CH);
        else
            printf("Ajob na?\n");
    }
}
