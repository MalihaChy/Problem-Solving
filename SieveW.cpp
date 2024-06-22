#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,m,flag=0;
    scanf("%d%d",&n,&m);
    if(n==2 || n==47){
        if(m==3){
            printf("YES\n");
            return 0;
        }
        else{
            printf("NO\n");
            return 0;
        }
    }
    if(m%2==0){
        printf("NO\n");
        return 0;
    }
    else{
        for(i=n+2;i<50;i+=2){
            if(flag==0){
                for(int j=3;j<m;j+=2){
                    if(i%j==0){
                        flag=0;
                        break;
                    }
                    else{
                        flag=1;
                    }
                }
            }
            else
                break;
        }
    }
    if(flag==1 && m==i-2)
        printf("YES\n");
    else
        printf("NO\n");
}
