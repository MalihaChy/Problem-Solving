#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int ar[3];
        cin>>ar[0]>>ar[1]>>ar[2];
        sort(ar,ar+3);
        printf("Case %d: %d\n",i,ar[1]);
    }
}
