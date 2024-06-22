#include<stdio.h>
#include<string.h>
int main()
{
    char str[105];
    int i,cnt=0;
    scanf("%s",str);
    if(str[0]>='a'&&str[0]<='z'){
        cnt++;
        for(i=1;str[i];i++){
            if(str[i]>='A'&&str[i]<='Z')
                cnt++;
        }
        if(cnt==strlen(str)){
            str[0]-=32;
            for(i=1;str[i];i++)
                str[i]+=32;
            printf("%s",str);
            return 0;
        }
        else{
            printf("%s",str);
            return 0;
        }
    }
    else{
        if(str[0]>='A'&&str[0]<='Z'){
            cnt++;
            for(i=1;str[i];i++){
                if(str[i]>='A'&&str[i]<='Z')
                    cnt++;
            }
            if(cnt==strlen(str)){
                for(i=0;str[i];i++)
                    str[i]+=32;
                printf("%s",str);
                return 0;
            }
            else{
                printf("%s",str);
                return 0;
            }
        }

    }
}






