#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n;
    int cnt = 0, police = 0;
    while(n--)
    {
        cin>>x;
        if(x != -1)police += x;
        else if(x == -1 && police != 0)
        {
            police--;
        }
        else cnt++;
    }
    cout<<cnt<<endl;
}
