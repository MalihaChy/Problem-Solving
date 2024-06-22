#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int P,V,T,cnt=0;
    while(n--){
        scanf("%d%d%d",&P,&V,&T);
        if((P==1&&V==1)||(T==1&&V==1)||(P==1&&T==1))
            cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
