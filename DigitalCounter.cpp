#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int d1=n/10;
    int d2=n%10;

    if(d1==0||d1==2||d1==6||d1==9) d1=1;
    else if(d1==3||d1==4) d1=2;
    else if(d1==5) d1=3;
    else if(d1==1) d1=6;
    else if(d1==7) d1=4;
    else d1=0;

    if(d2==0||d2==2||d2==6||d2==9) d2=1;
    else if(d2==3||d2==4) d2=2;
    else if(d2==5) d2=3;
    else if(d2==1) d2=6;
    else if(d2==7) d2=4;
    else d2=0;

    cout<<d1+d2+1+d1*d2<<endl;
}
