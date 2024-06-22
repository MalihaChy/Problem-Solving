#include<bits/stdc++.h>
using namespace std;

double pi=2*acos(0.0);

int main()
{
    int t;
    double val=4-pi;
    cin>>t;
    for(int i=1;i<=t;i++){
        double r;
        cin>>r;
        printf("Case %d: %.2lf\n",i,val*r*r);
    }
}
