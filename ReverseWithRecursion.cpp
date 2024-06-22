#include<bits/stdc++.h>
using namespace std;

string s = "Anita";

char Reverse(int i)
{
    if(i==0)return s[i];
    else Reverse(--i);
    return s[i];
}

int main()
{

    cout<<Reverse(s.size()-1)<<endl;
}
