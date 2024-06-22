#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    getchar();
    while(T--)
    {
        char str[100],num[10];
        gets(str);
        double sum=0.0;
        for(int i=0; str[i]; i++)
        {
            if(str[i]=='C'||str[i]=='H'||str[i]=='O'||str[i]=='N')
            {
                char c=str[i];
                i++;
                int j=0;
                while(str[i]!='C'||str[i]!='H'||str[i]!='O'||str[i]!='N')
                {
                    num[j]=str[i];
                    i++;
                    j++;
                }
                int val=atoi(num);
                if(c=='C')
                    sum+=(12.01*val);
                else
                {
                    if(c=='H')
                        sum+=(1.008*val);
                    else
                    {
                        if(c=='O')
                            sum+=(16.00*val);

                        else
                            sum+=(14.01*val);
                    }
                }
            }
            printf("%.3lf\n",sum);
        }
    }
}
