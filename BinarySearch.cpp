#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int x,int n,int ar[1000010])
{
    int high=n-1,low=0,mid,ans=-10;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(x>ar[mid])low=mid+1;
        else if(x<ar[mid])high=mid-1;
        else if(x==ar[mid]){
            ans=mid+1;
            high=mid-1;
        }
    }
    return ans;
}

int main()
{
    int n,q,x,tc=1;
    while(1)
    {
        cin>>n>>q;
        if(n==0&&q==0)return 0;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        cout<<"CASE# "<<tc<<":\n";
        tc++;
        for(int i=0;i<q;i++)
        {
            cin>>x;
            int y=Binary_Search(x,n,ar);
            if(y==-10)cout<<x<<" not found\n";
            else cout<<x<<" found at "<<y<<"\n";

        }
    }
}
