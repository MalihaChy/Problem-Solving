#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    if(!(n&1))
    {
        cout<<8<<" "<<n-8<<endl;
    }
    else
    {
        cout<<9<<" "<<n-9<<endl;
    }
}
