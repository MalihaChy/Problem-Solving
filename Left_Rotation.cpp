#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin>>n>>d;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    cout<<ar[d];
    for(int i=d+1;i<n;i++)cout<<" "<<ar[i];
    for(int i=0;i<d;i++)cout<<" "<<ar[i];
    cout<<endl;
}
