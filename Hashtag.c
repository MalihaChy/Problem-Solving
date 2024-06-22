#include<stdio.h>
#include<string.h>
int main()
{
    char str1[110],str2[110];
    int i,j;
    gets(str1);
    int length=strlen(str1);
    for(i=0,j=0;i<=length;i++){
        if(str1[i]!=' '){
            str2[j]=str1[i];
            j++;
        }
    }
    puts(str2);
    return 0;
}
