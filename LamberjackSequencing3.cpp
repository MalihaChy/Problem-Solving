#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<int>a,b;
    for(int k=1; k<=n; k++)
    {
        bool order1=true,order2=true;
        for(int i=1; i<=10; i++)
        {
            cin>>x;
            a.push_back(x);
            b.push_back(x);
        }
        sort(a.begin(),a.end());
        if(a[0]==b[0])
        {
            for(int i=1; i<10; i++)
            {
                if(a[i]!=b[i])
                {
                    order1=false;
                    break;
                }
            }
        }

        if(a[9]==b[0])
        {
            for(int i=0,j=9; i<10; i++,j--)
            {
                if(a[i]!=b[j])
                {
                    order2=false;
                    break;
                }
            }
        }

        if(k==1)
            cout<<"Lumberjacks:\n";
        if(order1&&order2)
            cout<<"Ordered\n";
        else
            cout<<"Unordered\n";
        a.clear();
        b.clear();
    }
}
