#include<stdio.h>
#include<string.h>
int main()
{
    int T,l,i;
    scanf("%d",&T);
    char str[105];
    while(T--){
        int cnt=0;
        scanf("%s",&str);
        l=strlen(str);
        for(i=0;i<l;i++){
            if(str[i]=='A'||str[i]=='D'||str[i]=='O'||str[i]=='P'||str[i]=='Q'||str[i]=='R'){
                cnt++;continue;
            }
            if(str[i]=='B')
                cnt=cnt+2;
        }
        printf("%d\n",cnt);
    }
    return 0;
}