#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,s,cnt=0;;
    cin>>n;
    int x;
    cin>>x;
    b=x;
    s=x;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        if(x>b){
            b=x;
            cnt++;
        }
        else if(x<s)
        {
            s=x;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
