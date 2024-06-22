#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i=1;
    double a,b,c;
    while(1)
    {
        cin>>t;
        if(t==0)
            break;
        else
        {
            cin>>a>>b>>c;
            if(t==1)
            {
                double s=((a+b)/2.0)*c;
                double A=(b-a)/c;
                printf("Case %d: %.3lf %.3lf\n",i,s,A);
            }
            else
            {
                if(t==2)
                {
                    double A=(b-a)/c;
                    double s=((a+b)/2.0)*A;
                    printf("Case %d: %.3lf %.3lf\n",i,s,A);
                }
                else{
                    if(t==3)
                    {
                        double v=pow((a*a+2*b*c),0.5);
                        double time=(v-a)/b;
                        printf("Case %d: %.3lf %.3lf\n",i,v,time);
                    }
                    else{
                        double u=pow((a*a-2*b*c),0.5);
                        double time=(a-u)/b;
                        printf("Case %d: %.3lf %.3lf\n",i,u,time);
                    }
                }
            }
        }
        i++;
    }

}
