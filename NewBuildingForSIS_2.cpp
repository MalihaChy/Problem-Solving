#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,a,b,k;
    scanf("%d%d%d%d%d",&n,&h,&a,&b,&k);
    int ta,fa,tb,fb;
    while(k--){
        scanf("%d%d%d%d",&ta,&fa,&tb,&fb);
        if(ta==tb)
            cout<<abs(fa-fb)<<endl;
        else{
            int x,y;
            if(abs(fa-a)>abs(fa-b))
            {
                x=b;
            }
            else
            {
                x=a;
            }
            y=abs(x-fb);
            cout<<abs(ta-tb)+abs(x-fa)+y<<endl;
        }
    }
}
