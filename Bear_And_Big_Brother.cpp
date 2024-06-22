#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l, b, i;
    cin>>l>>b;
    for(i=1;;i++)
    {
        l*=3;
        b*=2;
        if(l>b)break;
    }
    cout<<i<<endl;
}
