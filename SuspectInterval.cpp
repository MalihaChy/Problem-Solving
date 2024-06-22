#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,big=0;
    scanf("%d",&N);
    int ar[N+1];
    for(int i=0;i<N;i++)
        scanf("%d",&ar[i]);
    ar[N]=100000;
    sort(ar,ar+N+1);
    for(int i=0;;i++){
        int j=i+2;
        int ans=0;
        if(ar[i]==1&&ar[j]==100000)
            ans=ar[j]-ar[i]+1;
        else
        {
            if(ar[i]==1 || ar[j]==100000)
                ans=ar[j]-ar[i];
            else
                ans=ar[j]-1-ar[i];

        }
        if(ans>big)
            big=ans;
        if(j==N)
            break;
    }
    printf("%d\n",big);
}
