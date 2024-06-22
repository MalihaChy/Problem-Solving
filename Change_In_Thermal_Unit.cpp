#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int c,d;
        cin>>c>>d;
        double F=((9*c)/5.0)+32+d;
        double C=((F-32)*5.0)/9.0;
        printf("Case %d: %.2lf\n",i,C);
    }
}
