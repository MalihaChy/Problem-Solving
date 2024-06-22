#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    while((scanf("%d", &x))!=EOF)
    {
        if(x==0)cout<<"Y\n";
        else if(x%6)cout<<"N\n";
        else cout<<"Y\n";
    }
}
