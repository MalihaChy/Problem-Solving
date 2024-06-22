#include<stdio.h>
#include<string.h>
int main()
{
    char str1[105],alphabets[27],str2[105];
    int i,j,k=0;
    for(i=0;i<26;i++){
        alphabets[i]='a'+i;
    }
    alphabets[i]='\0';
    gets(str1);
    int length1=strlen(str1),length2;
    for(i=0;i<length1;i++){
        char c=str1[i];
        for(j=0;j<26;j++){
            if(c==alphabets[j]){
                str2[k]=c;
                alphabets[j]='#';
                k++;
            }
        }
    }
    str2[k]='\0';
    length2=strlen(str2);
    if(length2%2)
        printf("IGNORE HIM!\n");
    else
        printf("CHAT WITH HER!\n");
    return 0;
}
