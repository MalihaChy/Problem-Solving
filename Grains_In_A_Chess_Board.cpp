#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N--){
        int x;
        cin>>x;
        uint64_t grain=(pow(2,x))-1;
        cout<<grain/12000<<" kg\n";
    }
}
