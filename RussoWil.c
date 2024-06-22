#include<stdio.h>
#include<math.h>
int main(){
    int x1,y1,x2,y2;
    double russo,wil;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    russo=pow(((x1*x1)+(y1*y1)),0.5);
    wil=pow(((x2*x2)+(y2*y2)),0.5);
    if(russo>wil){
        printf("Wil\n");
        return 0;
    }
    if(russo<wil){
        printf("Russo\n");
        return 0;
    }
    if(russo==wil){
        printf("Empate\n");
        return 0;
    }
}
