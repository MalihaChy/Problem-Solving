#include<bits/stdc++.h>
using namespace std;

int main()
{
    double l,w,h,theta;
    double pi=acos(-1);
    double a,b,c,s,area_t;
    while(scanf("%lf%lf%lf%lf",&l,&w,&h,&theta)!=EOF)
    {
        a=l/cos((theta*pi)/180.0);
        b=l*tan((theta*pi)/180.0);
        c=l;
        s=(a+b+c)/2.0;
        area_t=sqrt(s*(s-a)*(s-b)*(s-c));
        //if(b==h)
            //cout<<area_t<<" mL"<<endl;
        //else
            //cout<<((l*h)-area_t)*w<<" mL"<<endl;
            cout<<pow(2,6);
    }
}
