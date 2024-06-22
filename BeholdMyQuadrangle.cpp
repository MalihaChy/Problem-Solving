#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int ar[4];
        cin>>ar[0]>>ar[1]>>ar[2]>>ar[3];
        sort(ar,ar+4);
        if(ar[0]==ar[1]&&ar[1]==ar[2]&&ar[2]==ar[3])
            cout<<"square\n";
        else{
            if(ar[0]==ar[1]&&ar[2]==ar[3]&&ar[1]!=ar[2])
                cout<<"rectangle\n";
            else{
                if(ar[0]+ar[1]+ar[2]>ar[3])
                    cout<<"quadrangle\n";
                else{
                    if(ar[0]+ar[1]+ar[2]<=ar[3]||ar[0]<=0||ar[1]<=0||ar[2]<=0||ar[3]<=0)
                        cout<<"banana\n";
                }
            }
        }
    }
}
