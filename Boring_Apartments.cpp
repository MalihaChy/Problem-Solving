#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, digit;
    cin>>t;
    while(t--)
    {
        cin>>x;
        int cnt = 0;
        for(int i=1;x;i++)
        {
            digit = x%10;
            x=x/10;
            cnt+=i;
        }
        cnt += ((digit-1)*10);
        cout<<cnt<<endl;
    }
}
