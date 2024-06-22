#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll max_so_far=0, max_ending_here=0,n;
    int x;
    while(1)
    {
        cin>>n;
        if(n==0)return 0;
        //int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>x;
            max_ending_here+=x;
            if(max_ending_here<0)max_ending_here=0;
            if(max_ending_here>max_so_far)max_so_far=max_ending_here;
        }
        if(max_so_far==0)cout<<"Losing streak.\n";
        else cout<<"The maximum winning streak is "<<max_so_far<<".\n";
        max_so_far=0;
        max_ending_here=0;
    }
}
