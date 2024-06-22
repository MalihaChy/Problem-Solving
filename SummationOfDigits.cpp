#include<bits/stdc++.h>
using namespace std;

int sum_of_digits_remainder(int x)
{
    int sum=0;
    while(x>0)
    {
        sum+=(x%10);
        x=x/10;
    }
    return sum;
}

int sum_of_digits_string(int x)
{
    int sum=0;
    stringstream ss;
    ss<<x;
    string S=ss.str();
    int sz=S.size();
    for(int i=0;i<sz;i++)
        sum+=(S[i]-48);
    return sum;
}

int main()
{
    cout<<sum_of_digits_remainder(102090)<<endl;
    cout<<sum_of_digits_string(102090)<<endl;
}
