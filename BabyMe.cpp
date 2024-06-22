#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int t;
    cin>>t;
    getchar();
    for(int i=1; i<=t; i++)
    {
        getline(cin,a);
        if(a.size()==8)
        {
            int x=a[5]-48;
            double ans=10*0.5+0.05*x;
            printf("Case %d: ",i);
            cout<<ans<<endl;
        }
        else
        {
            if(a.size()==7)
            {
                int x=(a[0]-48),y=a[4]-48;
                double ans=x*0.5+0.05*y;
                printf("Case %d: ",i);
                cout<<ans<<endl;
            }
            else
            {
                if(a.size()==3)
                {
                    int x=a[0]-48;
                    double ans=x*0.5;
                    printf("Case %d: ",i);
                    cout<<ans<<endl;
                }
                else
                {
                    if(a.size()==4)
                    {
                        double ans=10*0.5;
                        printf("Case %d: ",i);
                        cout<<ans<<endl;
                    }
                }
            }
        }
    }
}
