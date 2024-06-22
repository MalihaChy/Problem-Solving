#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    int s=0, d=0, flag=1;
    for(int i=0, j=n-1;i<n && j>=0;)
    {
        if(flag)
        {
            if(ar[i]>ar[j])
            {
                s=s+ar[i];
                ar[i]=0;
                i++;
            }
            else
            {
                s=s+ar[j];
                ar[j]=0;
                j--;
            }
            flag=0;
        }
        else
        {
            if(ar[i]>ar[j])
            {
                d+=ar[i];
                ar[i]=0;
                i++;
            }
            else
            {
                d+=ar[j];
                ar[j]=0;
                j--;
            }
            flag=1;
        }
    }
    cout<<s<<" "<<d<<endl;
}
