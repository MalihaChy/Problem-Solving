#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while((scanf("%d",&n))!=EOF)
    {
        int digit=1;
        int num=1;
        while(num%n!=0)
        {
            num=((num*10)+1)%n;
            digit++;
        }
        printf("%d\n",digit);
    }
}
