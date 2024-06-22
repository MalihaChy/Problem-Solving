#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int cnt=0;
    cin>>n;
    int n2 = n/2;
    for(int i=1;i<=n2;i++)
    {
        if(n%i == 0)cnt++;
    }
    cout<<cnt<<endl;
}
