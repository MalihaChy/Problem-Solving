#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6];
    for(int i=0; i<6; i++)
        cin>>a[i];
    sort(a,a+6);
    if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
    {
        if(a[4]==a[5]) cout<<"Elephant\n";
        else if(a[4]!=a[5]) cout<<"Bear\n";
    }
    else
    {
        if(a[1]==a[2]&&a[2]==a[3]&&a[3]==a[4])
        {
            if(a[0]==a[5]) cout<<"Elephant\n";
            else if(a[0]!=a[5]) cout<<"Bear\n";
        }
        else
        {
            if(a[2]==a[3]&&a[3]==a[4]&&a[4]==a[5])
            {
                if(a[0]==a[1]) cout<<"Elephant\n";
                else if(a[0]!=a[1]) cout<<"Bear\n";
            }
            else cout<<"Alien\n";
        }
    }
}
