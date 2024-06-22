#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[11];
    bool unorder=false;
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=10;i++)
        {
            cin>>ar[i];
        }
        if(ar[1]>ar[2])
        {
            for(int i=2;i<10;i++)
            {
                if(ar[i]<ar[i+1])
                {
                    unorder=true;
                    break;
                }
            }
        }
        else{
            for(int i=2;i<10;i++)
            {
                if(ar[i]>ar[i+1])
                {
                    unorder=true;
                    break;
                }
            }
        }
        if(k==1)
            cout<<"Lumberjacks:\n";
        if(unorder==false)
            cout<<"Ordered\n";
        else
            cout<<"Unordered\n";
    }
}
