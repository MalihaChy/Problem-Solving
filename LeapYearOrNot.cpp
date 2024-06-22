#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    while(cin>>y)
    {
        bool leap=false;
        if(y%4==0&&y%100!=0||y%400==0)
            leap=true;
        bool hulu=false,bulu=false;
        if(y%15==0)
            hulu=true;
        if(leap==true&&y%55==0)
            bulu=true;
        if(leap)
            cout<<"This is leap year.\n";
        if(hulu)
            cout<<"This is huluculu festival year.\n";
                if(bulu)
                    cout<<"This is bulukulu festival year.\n";
        if(!leap&&!hulu)
            cout<<"This is an ordinary year.\n";
        cout<<endl;
    }
}
