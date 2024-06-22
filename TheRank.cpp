#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,c,d,x;
    int ar[n];
    cin>>a>>b>>c>>d;
    x=a+b+c+d;
    ar[0]=x;
    for(int i=1;i<n;i++){
        cin>>a>>b>>c>>d;
        ar[i]=a+b+c+d;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]<ar[j])swap(ar[i],ar[j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]==x){
            cout<<i+1<<endl;
            return 0;
        }
    }
}
