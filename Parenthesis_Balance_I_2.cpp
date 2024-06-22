#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100050];
    while(scanf("%s",&str)!=EOF)
    {
        stack<char>s;
        s.push('#');
        int flag=0;
        for(int i=0; str[i]; i++)
        {
            if(str[i]=='(')
            {
                s.push('(');
            }
            else
            {
                if(str[i]==')')
                {
                    if(s.top()=='(')
                    {
                        s.pop();
                    }
                    else
                    {
                        printf("incorrect\n");
                        i=strlen(str)-1;
                        flag=1;
                    }
                }
            }
        }
        if(s.top()=='#'&& flag==0)
        {
            printf("correct\n");
        }
        else
        {
            if(s.top()=='(')
                printf("incorrect\n");
        }
        while(!s.empty())
            s.pop();
    }
}
