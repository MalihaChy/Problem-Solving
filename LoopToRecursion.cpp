#include<bits/stdc++.h>
using namespace std;

void For(int i)
{
    if(i==0)return;
    else cout<<i<<" ";
    For(--i);
}

void function(int i, int n) {
    if(i<=n) {
        function(i+1, n);
        printf("%d ", i);
    }
}

int main()
{
    cout<<"Loop\n";
    for(int i=1;i<=10;i++)
        cout<<i<<" ";
    cout<<"\nRecursion\n";
    //For(10);
    function(1,5);
}
