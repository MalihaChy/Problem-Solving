#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int ar[3];
        cin>>ar[0]>>ar[1]>>ar[2];
        sort(ar,ar+3);
        if(ar[0]*ar[0]+ar[1]*ar[1]==ar[2]*ar[2])
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }
}
