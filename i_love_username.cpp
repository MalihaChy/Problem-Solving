#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n;
    int cnt = 0;
    cin>>x;
    int mx = x, mn = x;
    n--;
    while(n--)
    {
        cin>>x;
        if(x>mx)
        {
            mx = x;
            cnt++;
        }
        else if(x<mn)
        {
            mn = x;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
