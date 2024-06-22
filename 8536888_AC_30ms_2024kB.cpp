#include<stdio.h>
#include<string.h>
int main()
{
    char str1[105],str2[105];
    int i,j,l,k=0;
    scanf("%s%s",&str1,&str2);
    l=strlen(str1);
    j=l-1;
    for(i=0;str1[i];i++){
        if(str1[i]==str2[j-i])
            k++;
    }
    if(k==l)
        printf("YES");
    else
        printf("NO");
    return 0;
}