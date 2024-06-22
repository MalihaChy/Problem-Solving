#include<bits/stdc++.h>
using namespace std;

void Print(int ar[100],int x,int y)
{
    if(x==y||x+1==y){
            cout<<ar[x]<<" "<<ar[y]<<endl;
            return;
    }
    else{
        cout<<ar[x]<<" "<<ar[y]<<endl;
        Print(ar,x+1,y-1);
    }
}

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        Print(ar,0,n-1);
    }
}
