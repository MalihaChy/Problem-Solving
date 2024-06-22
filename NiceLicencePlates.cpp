#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int sum=(a[0]-65)*26*26+(a[1]-65)*26+(a[2]-65);
        int num=(a[4]-48)*1000+(a[5]-48)*100+(a[6]-48)*10+a[7]-48;
        if(abs(num-sum)<=100)
            cout<<"nice"<<endl;
        else
            cout<<"not nice\n";
    }
}
