#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar, ar+n);
    int mn = INT_MAX;
    n--;
    int temp;
    for(int i=0;i<n;i++)
    {
        temp = abs(ar[i]-ar[i+1]);
        if(temp<mn)mn=temp;
    }
    cout<<mn<<endl;
}
