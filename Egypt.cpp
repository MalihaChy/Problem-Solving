#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[3];
    while(1)
    {
        cin>>ar[0]>>ar[1]>>ar[2];
        if(ar[0]!=0)
        {
            sort(ar,ar+3);
            if(ar[0]*ar[0]+ar[1]*ar[1]==ar[2]*ar[2])
                cout<<"right"<<endl;
            else
                cout<<"wrong"<<endl;
        }
        else
            break;
    }
}
