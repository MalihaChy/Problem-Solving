#include<stdio.h>
#include<string.h>
int main()
{
    char s[105],s1[105],t[105];
    gets(s);
    gets(t);
    int i,length,index;
    length=strlen(s);
    index=length-1;
    for(i=0;i<length;i++){
        s1[i]=s[index-i];
    }
    s1[i]='\0';
    if(strcmp(s1,t)==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
