#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;;i++)
    {
        n-=((i*(i+1))/2);
        if(n==0){
            cout<<i<<endl;
            return 0;
        }
        else if(n<0){
            cout<<i-1<<endl;
            return 0;
        }
    }
}
