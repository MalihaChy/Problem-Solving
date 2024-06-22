#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    while(1)
    {
        scanf("%d%d",&r,&c);
        if(r!=0&&c!=0)
        {
            char sky[r][c+1];
            for(int i=0; i<r; i++)
            {
                for(int j=0; j<=c; j++)
                {
                    scanf("%c",&sky[i][j]);
                }
            }
            int a,b,cnt=0;
            for(int i=0; i<r; i++)
            {
                for(int j=0; j<c; j++)
                {
                    if(sky[i][j]=='*')
                    {
                        a=i-1;
                        b=j-1;
                        if(a>=0&&a<r&&b>=0&&b<c)
                        {
                            if(sky[a][b]=='*')
                                break;
                        }


                        a=i-1;
                        b=j;
                        if(a>=0&&a<r&&b>=0&&b<c)
                        {
                            if(sky[a][b]=='*')
                                break;
                        }


                        a=i-1;
                        b=j+1;
                        if(a>=0&&a<r&&b>=0&&b<c)
                        {
                            if(sky[a][b]=='*')
                                break;
                        }
                        a=i;
                        b=j+1;
                        if(a>=0&&a<r&&b>=0&&b<c)
                        {
                            if(sky[a][b]=='*')
                                break;
                        }


                        a=i+1;
                        b=j+1;
                        if(a>=0&&a<r&&b>=0&&b<c)
                        {
                            if(sky[a][b]=='*')
                                break;
                        }


                        a=i+1;
                        b=j;
                        if(a>=0&&a<r&&b>=0&&b<c)
                        {
                            if(sky[a][b]=='*')
                                break;
                        }

                        a=i+1;
                        b=j-1;
                        if(a>=0&&a<r&&b>=0&&b<c)
                        {
                            if(sky[a][b]=='*')
                                break;
                        }


                        a=i;
                        b=j-1;
                        if(a>=0&&a<r&&b>=0&&b<c)
                        {
                            if(sky[a][b]=='*')
                                break;
                        }
                        cnt++;

                    }
                }
            }
            cout<<cnt<<endl;
        }
        else
        {
            break;
        }

    }
}

















