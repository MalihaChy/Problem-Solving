#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    int big=0, small=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>big)big=x;
        if(x<small)small=x;
    }
    cout<<(big-small+1)-n<<endl;
}
