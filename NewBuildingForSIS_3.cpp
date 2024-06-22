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
            int x=0;
            if(fa>b){
                x=fa-b;
                fa=b;
            }
            if(fa<a){
                x=a-fa;
                fa=a;
            }
            cout<<abs(ta-tb)+x+abs(fa-fb)<<endl;
        }
    }
}

