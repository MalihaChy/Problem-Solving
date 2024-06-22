#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
        cin>>ar[i];
    sort(ar,ar+n);
    int d=ar[n-1]-ar[0];
    if(d!=0)
    {
        int low=1,high=1;
        for(int i=1; i<n; i++)
        {
            if(ar[i]==ar[0])
                low++;
            else
                break;
        }
        for(int i=n-2; i>=0; i--)
        {
            if(ar[i]==ar[n-1])
                high++;
            else
                break;
        }
        cout<<d<<" "<<(low*high)<<endl;
    }
    else
        cout<<d<<" "<<(n*(n-1))/2<<endl;
}
