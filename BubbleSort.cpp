#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        int x = ar[i];
        int index = -1;
        for(int j=i;j<n;j++)
        {
            if(x>ar[j])
            {
                x=ar[j];
                index=j;
            }
        }
        if(index!=-1)swap(ar[i], ar[index]);
    }
    for(int i=0;i<n;i++)cout<<ar[i]<<" ";
}
