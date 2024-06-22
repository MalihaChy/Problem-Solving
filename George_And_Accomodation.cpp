#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p,c;
    int cnt=0;
    while(n--)
    {
        cin>>p>>c;
        if(c>=p+2)
            cnt++;
    }
    cout<<cnt<<endl;
}
