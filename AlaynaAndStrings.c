#include<stdio.h>
#include<string.h>
int main()
{
    char str[1010];
    gets(str);
    int i,capital=0,small=0;
    for(i=0;str[i];i++){
        if(str[i]>='A'&&str[i]<='Z')
            capital++;
        else{
            if(str[i]>='a'&&str[i]<='z')
                small++;
        }
    }
    printf("%d %d\n",capital,small);
    return 0;
}
