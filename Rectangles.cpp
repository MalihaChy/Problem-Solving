#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=n;
    int loop_control=n/2;
    for(int i=2;i<=loop_control;i++)
    {
        for(int j=i;;j++)
        {
            if(i*j>n)
                break;
            else
                cnt++;
        }
    }
    cout<<cnt<<endl;
}
