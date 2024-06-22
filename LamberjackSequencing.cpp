#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ar[10];
    cin>>n;
    int t=n;
    while(n--)
    {
        bool order=false;
        for(int i=0; i<10; i++)
            cin>>ar[i];
        int i;
        if(ar[0]<ar[1])
        {
            for(i=2; i<10; i++)
            {
                if(ar[i]<ar[i-1])
                    order=true;
            }
        }
        else
        {
            if(ar[0]>ar[1])
            {
                for(i=2; i<10; i++)
                {
                    if(ar[i]>ar[i-1])
                        order=true;
                }
            }
        }

        if(t==n-1)
            cout<<"Lumberjacks:\n";
        if(order&&i==10)
            cout<<"Unrdered\n";
        else
            cout<<"Ordered\n";


    }
}
