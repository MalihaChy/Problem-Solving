#include<bits/stdc++.h>
using namespace std;
int ar[55];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    ar[0]=1;
    ar[1]=1;



    if(m%2==0 || n==47){
        printf("NO\n");
        return 0;
    }
    if(n==2){
        if(m==3){
            printf("YES\n");
            return 0;
        }
        else{
            printf("NO\n");
            return 0;
        }
    }


    for(int i=4;i<=53;i+=2)
        ar[i]=1;
    for(int i=3;i*i<=53;i+=2){
        if(ar[i]==0){
            for(int j=i*i;j<=53;j+=(2*i))
                ar[j]=1;
        }
    }

    for(int i=n+2;;i+=2)
    {
        if(ar[i]==0){
            if(i==m){
                printf("YES\n");
                return 0;
            }
            else{
                printf("NO\n");
                return 0;
            }
        }
    }
}
