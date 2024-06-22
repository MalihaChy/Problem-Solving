#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=2;i<=n;i++)
        cin>>ar[i];
    stack<int>s;
    int i=n;
    s.push(n);
    while(1)
    {
        s.push(ar[i]);
        i=ar[i];
        if(i==1)break;
    }
    cout<<s.top();
    s.pop();
    while(s.empty()!=true){
        cout<<" "<<s.top();
        s.pop();
    }
    cout<<endl;
}
