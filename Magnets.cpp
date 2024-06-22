#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=1;
    cin>>n;
    string a,b;
    cin>>a;
    n--;
    while(n--)
    {
        cin>>b;
        if(a[1]==b[0])
            cnt++;
        a=b;
    }
    cout<<cnt<<endl;
}
