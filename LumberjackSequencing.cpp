#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[10];
    for(int k=1; k<=n; k++)
    {
        for(int i=0; i<10; i++)
            cin>>ar[i];
        bool order=true;
        if(k==1)
            cout<<"Lumberjacks:\n";
        if(ar[0]<ar[1])
        {
            for(int i=1; i<9; i++)
            {
                if(ar[i]>ar[i+1]){
                    cout<<"Unordered\n";
                    order=false;
                    break;
                }
            }
        }
        if(ar[0]>ar[1])
        {
            for(int i=1; i<9; i++)
            {
                if(ar[i]<ar[i+1]){
                    cout<<"Unordered\n";
                    order=false;
                    break;
                }
            }
        }
        if(order)
            cout<<"Ordered\n";


    }

}
