#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    getchar();
    int taka=0;
    while(T--){
        char str[15];
        gets(str);
        if(str[0]=='r')
            cout<<taka<<endl;
        if(str[0]=='d'){
            char val[15];
            int j=-1;
            for(int i=7;str[i];i++){
                j++;
                val[j]=str[i];
            }
            val[j+1]='\0';
            int help=atoi(val);
            taka+=help;
        }
    }
}
