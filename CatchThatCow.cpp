#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    while(1)
    {
        if(k&1){
            k-=1;
            cnt++;
        }
        else if(!(k&1)){
            k=k/2;
            cnt++;
        }
        if(k-1==n||k+1==n){
            cout<<++cnt<<endl;
            return 0;
        }
        if(k==n){
            cout<<cnt<<endl;
            return 0;
        }
    }
}
