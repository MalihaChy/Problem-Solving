#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        double x;
        cin>>x;
        int cnt=0;
        while(x>=1){
            x/=2.0;
            cnt++;
        }
        cout<<cnt<<" dias\n";
    }
}
