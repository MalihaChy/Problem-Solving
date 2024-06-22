#include<stdio.h>
int main()
{
    char str[106];
    int sum=0,i;
    scanf("%s",str);
    for(i=0;str[i];i++){
        sum+=(str[i]-'a');
    }
    printf("%d",sum);
    return 0;
}
