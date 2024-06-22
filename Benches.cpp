#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n];
    int big=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]>big)big=ar[i];
    }
    big+=m;
    while(m)
    {
        sort(ar,ar+n);
        ar[0]++;
        m--;
    }
    sort(ar,ar+n);
    cout<<ar[n-1]<<" "<<big<<endl;
}
