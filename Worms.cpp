#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n],x;
    cin>>ar[0];
    for(int i=1;i<n;i++)
    {
        cin>>ar[i];
        ar[i]+=ar[i-1];
    }
    int m;
    cin>>m;
    //int ar2[m];
    for(int i=0;i<m;i++)
    {
        cin>>x;
        int high=n-1,low=0;
        while(high>=low)
        {
            int mid=(high+low)/2;
            if(x>ar[mid])low=mid+1;
            else if(x<ar[mid])high=mid-1;
            else if(x>=ar[mid])
            {
                cout<<mid<<endl;
                break;
            }
        }
    }
}
