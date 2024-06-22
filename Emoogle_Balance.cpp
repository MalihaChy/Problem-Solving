#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,j=1;
    while(1){
        cin>>t;
        int treat=0,reason=0;
        if(t==0)
            break;
        else{
            int ar[t];
            for(int i=0;i<t;i++){
                cin>>ar[i];
                if(ar[i]==0)
                    treat++;
                    else
                        reason++;
            }
            printf("Case %d: %d\n",j,reason-treat);
            j++;
        }
    }
}
