

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int sum=n;
    if(n==1){
        printf("1\n");
        return 0;
    }
    while(n%k)
    {
        sum+=(n/k);
        n=(n/k)+(n%k);
    }
    printf("%d\n",sum);

}

