#include<stdio.h>
#include<string.h>
int main()
{
    char str[105];int i;
    scanf("%s",&str);
    for(i=0;str[i];i++){
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}