#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, n, x, y, v;
    cin>>a>>b>>n;
    double ans, min_time = INT_MAX;
    while(n--)
    {
        cin>>x>>y>>v;
        ans = pow(((a-x)*(a-x)+(b-y)*(b-y)), 0.5)/v;
        if(ans<min_time)min_time = ans;
    }
    cout<<fixed<<setprecision(20)<<min_time<<endl;
}
