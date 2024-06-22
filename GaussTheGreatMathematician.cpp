#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a1,a2,an,n,sum,d;
    while(t--)
    {
        cin>>a1>>a2>>an;
        d=a2-a1;
        n=((an-a1)/d)+1;
        sum=(n*(a1+an))/2;
        cout<<sum<<endl;
    }
}
