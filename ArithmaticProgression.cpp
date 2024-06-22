/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long T,x,xth,y,yth;
    cin>>T;
    for(long long i=1;i<=T;i++){
        cin>>x>>xth>>y>>yth;
        long long d=yth-xth;
        //long long ans=xth;
        //for(long long j=1;j<x;j++){
          //  ans-=d;
        //}
        printf("Case %lld: %lld\n",i,yth-(y-1)*d);
    }
}
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long T,x,xth,y,yth;
    cin>>T;
    for(long long i=1;i<=T;i++){
        cin>>x>>xth>>y>>yth;
        x--;
        y--;
        long long sum = xth-yth;
        long long d1 = x-y;
        long long d;
        d = sum/d1;
        long long ans;
        ans = xth - (d*x);

        printf("Case %lld: %lld\n",i,ans);
    }
}
