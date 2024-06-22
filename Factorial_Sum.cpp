#include<bits/stdc++.h>
using namespace std;

long long ar[25];

int main()
{
    //memset(ar,1,sizeof(ar));
    ar[0]=1;
    for(int i=1;i<=20;i++){
        ar[i]=ar[i-1]*i;
    }
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        cout<<ar[a]+ar[b]<<endl;
    }
}
