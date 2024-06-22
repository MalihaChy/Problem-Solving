#include<stdio.h>
#include<string.h>
int main()
{
    char str[106];
    int T,i;
    scanf("%d",&T);
    while(T--){
        scanf("%s",str);
        int l=strlen(str),a=0,b=0,c=0;
        if(l>4){
            for(i=0;i<l;i++){
                if(str[i]>='A'&&str[i]<='Z'){
                    a=1;
                    break;
                }
            }
            for(i=0;i<l;i++){
                if(str[i]>='a'&&str[i]<='z'){
                    b=1;
                    break;
                }
            }
            for(i=0;i<l;i++){
                if(str[i]>='0'&&str[i]<='9'){
                    c=1;
                    break;
                }
            }

        }
        if(a&&b&&c&&l>4)
            printf("YaHoo!!\n");
        else
            printf("YuKK!!\n");
    }
    return 0;
}
