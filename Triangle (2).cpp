#include<bits/stdc++.h>
using namespace std;

int main()
{
    double ar[3];
    cin>>ar[0]>>ar[1]>>ar[2];
    double a=ar[0],b=ar[1],c=ar[2];
    sort(ar,ar+3);
    if(ar[0]+ar[1]==ar[2])
        printf("Area = %.1lf\n",((a+b)/2)*c);
    else
        printf("Perimetro = %.1lf\n",a+b+c);
}
