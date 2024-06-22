#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[2100];
    memset(ar,0,sizeof(ar));
    int n;
    int x;
    int largest=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ar[x]++;
        largest=max(x,largest);
    }
    for(int i=0;i<=largest;i++)
    {
        if(ar[i]>0)cout<<i<<" aparece "<<ar[i]<<" vez(es)\n";
    }
}
