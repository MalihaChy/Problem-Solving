#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int sum=ar[0],song=ar[0];
    for(int i=1;i<n;i++){
        sum+=(10+ar[i]);
        song+=ar[i];
    }
    if(sum>d)
        cout<<-1<<endl;
    else{
        cout<<(d-song)/5<<endl;
    }
}
