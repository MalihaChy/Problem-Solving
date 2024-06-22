#include<bits/stdc++.h>
using namespace std;

int ar[1000006];

void sieve(){
    ar[0]=1;
    ar[1]=1;
    //int k=0;
    for(int i=4;i<=1e6;i+=2)
        ar[i]=1;
    for(int i=3;i*i<=1e6;i+=2){
        if(ar[i]==0){
            for(int j=i*i;j<=1e6;j+=(2*i))
                ar[j]=1;
        }
    }
      //  ar[i]=1;
    for(int i=2;i<=1e6;i++){
        if(ar[i]==0){
               // k++;
    printf("%d ",i);
    }
    }
  //  cout<<k<<endl;

}
int main()
{
    sieve();

}
