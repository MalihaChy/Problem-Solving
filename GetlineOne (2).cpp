#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[200];
    double a;
    double sum=0.0,cnt=0;
    while(scanf("%s%lf",&str,&a)!=EOF){
        //cin>>s;
       // if(scanf("%f",&a)==EOF)
         //   break;
        sum+=a;
        cnt++;
        printf("%.1lf\n",sum/cnt);
    }
    printf("%.1lf\n",sum/cnt);
}
