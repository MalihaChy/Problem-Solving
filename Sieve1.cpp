#include<bits/stdc++.h>
using namespace std;

int ar[107];

void sieve()
{
    ar[0]=1;
    ar[1]=1;
    for(int i=4;i<=100;i+=2)
        ar[i]=1;
    for(int i=3;i*i<=100;i+=2){
        if(ar[i]==0){
            for(int j=i*i;j<=100;j+=(2*i))
                ar[j]=1;
        }
    }
    for(int i=2;i<=100;i++){
        if(ar[i]==0)
            cout<<i<<endl;
    }
}

int main()
{
    sieve();
}
