#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    while(getline(cin,a)){
        for(int i=0;a[i];i++)
            b+=(a[i]-7);
        cout<<b<<endl;
        b.clear();
    }
}
