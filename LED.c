#include<stdio.h>
#include<string.h>
int main()
{
    char str[10^100];
    int T,i;
    scanf("%d",&T);
    while(T--){
        scanf("%s",str);
        int sum=0;
        for(i=0;str[i];i++){
            if(str[i]=='1')
                sum+=2;
            else{
                if(str[i]=='2'||str[i]=='3'||str[i]=='5')
                    sum+=5;
                else{
                    if(str[i]=='4')
                        sum+=4;
                    else{
                        if(str[i]=='0'||str[i]=='9'||str[i]=='6')
                            sum+=6;
                        else{
                            if(str[i]=='7')
                                sum+=3;
                            else
                                sum+=7;
                        }
                    }
                }
            }

        }
        printf("%d leds\n",sum);
    }
    return 0;
}
