#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a;
    int cnt;
    char grade;
    while(1){
        cin>>n;
        if(n==0)break;
        while(n--)
        {
            cnt=0;
            grade='z';
            for(int i=0;i<5;i++)
            {
                cin>>a;
                if(a<=127){
                    cnt++;
                    grade=65+i;
                }
            }
            if(cnt==1&&grade!='z'){
                cout<<grade<<endl;
            }
            else cout<<"*\n";
        }
    }
}
