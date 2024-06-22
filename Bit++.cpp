#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=0;
    cin>>n;
    getchar();
    for(int i=1;i<=n;i++){
        char str[4];
        gets(str);
        if(str[0]=='+'||str[2]=='+')
            x++;
        else
            x--;
    }
    cout<<x<<endl;
}
