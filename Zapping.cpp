#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(1){
        cin>>a>>b;
        if(a==-1)
            break;
        else{
            int high=max(a,b);
            int low=min(a,b);
            int x=low+100-high;
            int y=high-low;
            cout<<min(x,y)<<endl;
        }
    }
}
