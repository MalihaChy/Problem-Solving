#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s,r;
    while(scanf("%ld%ld",&s,&r)!=-1){
        long long ans=r*r;
        if(ans<s)
            printf("Yes, he can do it\n");
        else
            printf("No, he can't\n");
    }
}
