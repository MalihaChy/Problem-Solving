#include<stdio.h>
#include<string.h>
int main()
{
    char str[1010];
    int i,vowel=0;
    gets(str);
    for(i=0;str[i];i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            vowel++;
    }
    printf("%d\n",vowel);
    return 0;
}
