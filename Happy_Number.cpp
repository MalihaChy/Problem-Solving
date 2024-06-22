#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    getchar();
    for(int i=1;i<=T;i++){
        char str[100];
        gets(str);
        int N=atoi(str);
        int sum=0;
        while(1){
            for(int i=0;str[i];i++){
                int a=str[i]-48;
                sum+=(a*a);
            }
            if(sum<10)
                break;
            else{
                itoa(sum,str,10);
            }
        }
        if(sum==1)
            printf("Case #%d: %d is a Happy number.\n",i,N);
            else
                printf("Case #%d: %d is a Unhappy number.\n",i,N);
    }
}
