#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    getchar();
    while(T--){
        char str[100];
        gets(str);
        int sum=0,cnt=0;
        for(int i=0;str[i];i++){
            if(str[i]=='O'){
                cnt++;
                sum+=cnt;
            }
            else
                cnt=0;
        }
        cout<<sum<<endl;
    }
}
