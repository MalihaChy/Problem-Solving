#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    //int ans;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    if(ar[0]>15)cout<<"15\n";
    //
    else{
        int x=n-1;
        for(int i=0;i<x;i++)
        {
            if(ar[i]+15<ar[i+1])
            {
                cout<<ar[i]+15<<endl;
                return 0;
            }
        }
        if(ar[n-2]>=75)cout<<"90\n";
        else cout<<ar[n-1]+15<<endl;
    }
}
