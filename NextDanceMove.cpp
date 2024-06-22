#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ar[10]={1,2,3,1,2,3,1,2,3,4};
    scanf("%d",&n);
    int mod=n%10;
    if(mod==0)
        printf("4\n");
    else
        printf("%d\n",ar[mod-1]);
}
