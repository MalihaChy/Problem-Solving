#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, x;
    while(1){
        cin>>n>>d;
        if(n==0 && d==0)
            return 0;
        else
        {
            int ar[1][n];
            memset(ar, 0, sizeof(ar));
            for(int i=0; i<d; i++)
            {
                for(int j=0; j<n; j++)
                {
                    cin>>x;
                    ar[0][j]+=x;
                }
            }
            for(int i=0; i<n; i++)
            {
                if(ar[0][i]==d){
                    cout<<"yes\n";
                    x = 100;
                    break;
                }
            }
            if(x!=100)cout<<"no\n";
        }
    }
}
