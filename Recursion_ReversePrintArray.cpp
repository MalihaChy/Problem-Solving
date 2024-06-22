#include<bits/stdc++.h>
using namespace std;

void Print(int ar[100],int i)
{
    if(i<0)return;
    else{
        cout<<ar[i]<<" ";
        Print(ar,--i);
    }
}

int main()
{
    int n;
    while(1){
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        Print(ar,n-1);
    }
}
