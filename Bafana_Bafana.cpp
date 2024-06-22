#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        int N,K,P;
        cin>>N>>K>>P;
        for(int j=1; j<=P; j++)
        {
            if(K==N)
                K=1;
            else
                K+=1;
        }
        printf("Case %d: %d\n",i,K);

    }
}
