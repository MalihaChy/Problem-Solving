#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,c,cnt=0;
    cin>>n;
    while(n--)
    {
        cin>>p>>c;
        if(c-p>=2)
            cnt++;
    }
    cout<<cnt<<endl;
}
