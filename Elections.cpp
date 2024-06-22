#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int opponent=0,awruk=0,big=0;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        opponent+=ar[i];
        big=max(big,ar[i]);
    }
    while(awruk<opponent)
    {
        for(int i=0; i<n; i++)
        {
            awruk+=(big-ar[i]);
        }
        if(awruk>opponent){
            cout<<big<<endl;
            return 0;
        }
        else{
            big++;
            awruk=0;
        }
    }
}
