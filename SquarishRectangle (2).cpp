#include<bits/stdc++.h>
using namespace std;



int main()
{
    long long W,H;
    scanf("%lld%lld",&W,&H);
    long long area=W*H;
    for(long long i=sqrt(area);i>0;i--){
        if(area%i==0){
            printf("%lld\n",abs((area/i)-i));
            break;
        }
    }
}



