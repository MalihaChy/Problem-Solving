#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    while(1){
    cin>>n;
    if(n==0)
        break;
    long ans=0;
    int ar[106];
    for(int i=1;i<=n;i++){
        ar[i]=i*i;
        ans+=ar[i];
    }
    printf("%ld\n",ans);
    }
}
