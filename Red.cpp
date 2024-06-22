#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,r;
    while(scanf("%d%d",&s,&r)!=EOF){
        long long ans=r*r;
        if(ans<s)
            printf("Yes, he can do it\n");
        else
            printf("No, he can't\n");
    }
}

