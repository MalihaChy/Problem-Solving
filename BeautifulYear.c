#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    while(1){
        y++;
        int a=y/1000;
        int m=y%1000;
        int b=m/100;

        int n=(m-b*100);
        int c=n/10;
        int d=n%10;
        if(a!=b&&a!=c&&a!=d){
            if(b!=c&&b!=d){
                if(c!=d){
                    printf("%d\n",y);
                    return 0;
                }
            }
        }
    }
}
