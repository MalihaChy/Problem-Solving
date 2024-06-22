#include<bits/stdc++.h>
using namespace std;

int ar[10005];

int factorial(int n)
{
    if (n== 0 || n==1) return   1;
    else{
        if(ar[n]!=0)
            return ar[n];
        else{
            ar[n]=(n*factorial(n-1))%100000007;
            return (n*factorial(n-1))%100000007;
        }

    }
}
int main()
{
    int T, i=1;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        printf("Case %d: %d\n", i++, factorial(n));
    }

}
