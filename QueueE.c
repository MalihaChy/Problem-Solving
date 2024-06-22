#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>dq;
    int n;
    scanf("%d",&n);
    while(n!=0){
        printf("Discarded cards: ");
        for(int i=1;printf("%d",i),i<n;i+=2)
            printf(", ");


        for(int i=2;i<=n;i+=2)
            dq.push_back(i);
        for(int i=0;i<=(n/2);i++){
            printf("%d ",dq[i]);
        }
    }
}
