#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int x,y,r;
        cin>>x>>y>>r;
        double d=pow((x*x+y*y),0.5);
        printf("%.2lf %.2lf\n",fabs(d-r),d+r);
    }
}
