#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    double total = 0.0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        total += x;
    }
    cout<<total/n<<endl;
}
