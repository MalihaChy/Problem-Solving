#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ar[d+1];
    memset(ar,0,sizeof(ar));
    for(int i=k;i<=d;i++){
        if(i%k==0&&ar[i]==0)
            ar[i]=1;
    }
    for(int i=l;i<=d;i++){
        if(i%l==0&&ar[i]==0)
            ar[i]=1;
    }
    for(int i=m;i<=d;i++){
        if(i%m==0&&ar[i]==0)
            ar[i]=1;
    }
    for(int i=n;i<=d;i++){
        if(i%n==0&&ar[i]==0)
            ar[i]=1;
    }
    int cnt=0;
    for(int i=0;i<=d;i++){
        if(ar[i]==1)
            cnt++;
    }
    cout<<cnt<<endl;
}
