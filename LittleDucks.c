#include<stdio.h>
#include<string.h>
int main()
{
    char str[23];
    while(1){
        gets(str);
        if(str[0]=='-'&&str[1]=='1')
            return 0;
        else{
            long long p=atol(str);
            printf("%lld\n",p-1);
        }
    }
}
