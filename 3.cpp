#include<bits/stdc++.h>
using namespace std;
#define NMAX 1001
int arr[NMAX];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int N,Q,x,z;
    int minimum=INT_MAX;
    cin>>N>>Q;
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+N);
    while(Q--)
    {
        cin>>x;
        for(int i=0;i<N;i++)
        {
            z=abs(max(x,arr[i])-min(x,arr[i]));
            minimum=min(z,minimum);
        }
        cout<<minimum<<"\n";
    }
    return 0;
}
