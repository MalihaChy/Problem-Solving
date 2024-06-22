#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(1){
        cin>>a>>b;
        int cnt=0;
        if(a!=0 && b!=0){
            for(int i=a;i<=b;i++){
                double d= sqrt(i);
                int c=d;
                if(d-c==0)
                    cnt++;
            }
            cout<<cnt<<endl;
        }
        else{
            break;
        }
    }
}
