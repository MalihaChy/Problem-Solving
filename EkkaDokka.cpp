#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int w,n=0,m=100000000;
        cin>>w;
        int half=w/2;
        for(int j=1;j<=half;j++){
            int x=w/j;
            if(x%2==0&&j%2!=0||j%2==0&&x%2!=0&&m>j){
                n=x;
                m=j;
            }
        }
        if(n!=0&&m!=100000000)
        cout<<n<<" "<<m;
        else
            cout<<"impossible\n";
    }
}
