#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=1;
    int zero;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        else{
            int x;
            zero=0;
            for(int i=0;i<n;i++){
                cin>>x;
                if(x==0)
                    zero++;
            }
            printf("Case %d: %d\n",k++,n-zero-zero);
        }
    }
}
