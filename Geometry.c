#include<stdio.h>
#include<math.h>

int main()
{
    int R;
    double pi=2*acos(0.0);
    while(scanf("%d",&R)!=EOF){
        printf("%.6lf\n",(R*R*(4.0-pi)));
    }
    return 0;
}
