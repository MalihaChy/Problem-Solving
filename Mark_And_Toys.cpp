#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, sum = 0, cnt = 0;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(ar[j]>ar[j+1])swap(ar[j], ar[j+1]);
        }
    }*/
    sort(ar, ar+n);
    for(int i=0;i<n;i++)
    {
        cnt++;
        sum+=ar[i];
        if(sum>k)
        {
            cnt--;
            break;
        }
    }
    cout<<cnt<<endl;
}
