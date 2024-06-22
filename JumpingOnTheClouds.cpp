#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    int cnt=0;
    int i;
    for(i=0; i<n; i++)cin>>ar[i];
    n--;
    for(int i=0;;)
    {
        if(ar[i+2]==0)i+=2;
        else i++;
        cnt++;
        if(i==n)
        {
            cout<<cnt<<endl;
            return 0;
        }
        else if(i>n)
        {
            cout<<++cnt<<endl;
            return 0;
        }
    }
}
