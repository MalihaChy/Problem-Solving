#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    int ar[12];
    for(int i=0;i<12;i++)
        cin>>ar[i];
    for(int i=0;i<12;i++)
    {
        for(int j=i;j<12;j++)
        {
            if(ar[i]>ar[j])
                swap(ar[i],ar[j]);
        }
    }
    int sum=0,cnt=0;
    for(int i=11;i>=0;i--)
    {
        if(k>sum){
            sum+=ar[i];
            cnt++;
        }
    }
    if(k<=sum)
        cout<<cnt<<endl;
    else
        cout<<-1<<endl;
}
