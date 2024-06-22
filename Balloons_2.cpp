#include<bits/stdc++.h>
using namespace std;

int ar[1000];

int main()
{
    int n,sum_all=0,sum_G=0,cnt=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }

    if(n==1)
        cout<<"-1\n";
    else{
        for(int i=0;i<n;i++){
            sum_G+=ar[i];
            sum_all-=ar[i];
            if(sum_all==sum_G)
            {
                cout<<"-1\n";
                break;
            }
            else
                cnt++;
        }
    }
}

