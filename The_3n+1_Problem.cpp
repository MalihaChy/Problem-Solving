#include<bits/stdc++.h>
using namespace std;

int main()
{
    int iI,jI;
    while(scanf("%d%d",&iI,&jI)!=EOF){
        int MAX=0;
        int i=iI,j=jI;
        for(int k;k=i,i<=j;i++){
            int cnt=0;
            while(k!=1){
                if(k&1){
                    k=3*k+1;
                }
                else{
                    k=k/2;
                }
                cnt++;
            }
            cnt++;
            if(cnt>MAX){
                MAX=cnt;
            }
        }
        printf("%d %d %d\n",iI, jI,MAX);
    }
}
