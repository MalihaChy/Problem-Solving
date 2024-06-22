#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,pi=acos(-1);
    while(cin>>a>>b>>c)
    {
        double p=(a+b+c)/2.0;
        double triangle=pow((p*(p-a)*(p-b)*(p-c)),0.5);
        double R=(a*b*c)/(4*triangle);
        double r=triangle/p;
        double s_circle=(pi*r*r);
        triangle-=s_circle;
        double b_circle=(pi*R*R)-(triangle+s_circle);
        printf("%.4lf %.4lf %.4lf\n",b_circle,triangle,s_circle);
    }
}
