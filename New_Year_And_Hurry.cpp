#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    k = 240 - k;
    int i, flag = 0;
    for(i=1; i<=n; i++)
    {
        k -= (i*5);
        if(k<0)
        {
            i--;
            flag = 1;
            break;
        }
        else if(k==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag)cout<<i<<endl;
    else cout<<i-1<<endl;
}
