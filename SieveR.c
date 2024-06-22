#include<bits/stdc++.h>
using namespace std;

int ar[100000005];
int ar2[100000005];

int main()
{
    ar[0]=1;
    ar[1]=1;
    for(int i=4;i<=10e8;i+=2)
        ar[i]=1;
    for(int i=3;i*i<=10e8;i+=2){
        if(ar[i]==0){
            for(int j=i*i;j<=10e8;j+=(2*i))
                ar[j]=1;
        }
    }
    ar2[0]=2;
    int j=0;
    for(int i=3;i<=n;i+=2){
        if(ar[i]==0)
        {
            j++;
            ar2[j]=i;

        }
    }
    for(int i=0;i<=j;i+=100)
        printf("%d\n",ar2[j]);
}
