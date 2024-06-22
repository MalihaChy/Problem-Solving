#include<bits/stdc++.h>
using namespace std;

int ar[100000005];
int ar2[100000005];

int main()
{
    ar[0]=1;
    ar[1]=1;

    int count=0,j=1;
    for(int i=4;i<=1e8;i+=2)
        ar[i]=1;
    for(int i=3;i*i<=1e8;i+=2){
        if(ar[i]==0){
            for(int j=i*i;j<=1e8;j+=(2*i))
                ar[j]=1;
        }
    }
    printf("2\n");
    for(int i=3;i<=1e8;i+=2){
        if(ar[i]==0)
            count++;
        if(count==100*j){
            j++;
            printf("%d\n",i);
        }
    }


}
