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
            if(abs(fa-a)<abs(fa-b))
                cout<<(abs(ta-tb)+abs(a-fa)+abs(a-fb))<<endl;
            //if(abs(fa-a)>abs(fa-b))
            else
                cout<<(abs(ta-tb)+abs(b-fa)+abs(b-fb))<<endl;
        }
    }
}
