#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,b,t,x;
    cin>>p>>b>>t;
    int match=0;
    x=p;
    //if(x==1)
    //{
      //  cout<<0<<" "<<t<<endl;
      //  return 0;
    //}
    while(p!=1)
    {
        //if(p/2==1&&p%2==0)
            //break;
        match+=(p/2);
        p=(p/2)+(p%2);
    }
    //match++;
    cout<<match+(2*match*b)<<" "<<x*t<<endl;
}
