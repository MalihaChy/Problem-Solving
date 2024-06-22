#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    int ar[N];
    int cnt=0;
    for(int i=0;i<N;i++)
        scanf("%d",&ar[i]);
    for(int i=0;i<N-1;i++){
        if(ar[i]%10!=ar[i+1]/10)
            cnt++;
    }
    printf("%d\n",cnt);
}
