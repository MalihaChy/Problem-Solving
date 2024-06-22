#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        /*for(int i=0;i<n;i++)
        {
            int minimum = i;
            for(int j=i+1;j<n;j++)
            {
                if(ar[j]<ar[minimum])minimum=j;
            }
            swap(ar[minimum], ar[i]);
        }*/
        sort(ar, ar+n);
        double sum=0.0, fa=ar[n-1];
        n--;
        for(int i=0;i<n;i++)sum+=ar[i];
        cout<<fixed<<setprecision(9)<<fa+(sum/n)<<endl;
    }
}
