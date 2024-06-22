#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        int a1,a2,a3,n;
        cin>>a1>>a2>>a3>>n;
        if(a1!=a2&&a2!=a3&&a1-a2==a2-a3)
        {
            if(a1<a2)
                printf("Case %d: %ld\n",i,a1+(n-1)*abs(a1-a2));
            else
                printf("Case %d: %ld\n",i,a1+(n-1)*(a2-a1));
        }
        else
            printf("Case %d: Error\n",i);
    }
}
