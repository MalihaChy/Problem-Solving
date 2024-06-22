#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        else
        {
            int ar[n];
            for(int i=0; i<n; i++)
                cin>>ar[i];
            sort(ar,ar+n);
            cout<<ar[0];
            for(int i=1; i<n; i++)
                cout<<" "<<ar[i];
            cout<<endl;
        }
    }
}
