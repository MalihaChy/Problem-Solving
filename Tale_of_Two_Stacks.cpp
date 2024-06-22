#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    queue<int>q;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==1)
        {
            cin>>b;
            q.push(b);
        }
        else if(a==2)q.pop();
        else cout<<q.front()<<endl;
    }
}
