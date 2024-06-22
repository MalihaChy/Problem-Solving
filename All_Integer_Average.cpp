#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        else{
            int ar[n];
            int sum=0;
            for(int i=0;i<n;i++){
                cin>>ar[i];
                sum+=ar[i];
            }
            int avg=sum/n;
        }
    }
}
