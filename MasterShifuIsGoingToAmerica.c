#include<stdio.h>
#include<string.h>
int main()
{
    int T,N,i,ar2[4];
    char str[6];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        int ar[N];
        for(i=0;i<N;i++)
            scanf("%d",&ar[i]);
        scanf("%s",str);
        ar2[0]=str[0]-'0';
        ar2[1]=str[1]-'0';
        ar2[2]=str[3]-'0';
        ar2[3]=str[4]-'0';
        int time=0,cnt=0;
        time=(((ar2[0]*10)+ar2[1])*60)+(ar2[2]*10)+ar2[3];
        for(i=0;i<N;i++){
            if(ar[i]<=time)
                cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
