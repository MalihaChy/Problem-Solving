#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char c;
    int pos=0, cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        if(c=='U')pos++;
        else
        {
            if(pos>=0 && (pos-1)<0)cnt++;
            pos--;
        }
    }
    cout<<cnt<<endl;
}
