#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[10005],word[100];
    while(gets(str)){
        int j=-1;
        for(int i=0;str[i];i++){
            if(str[i]!=' '){
                j++;
                word[j]=str[i];
            }
            else{
                for(int k=j;k>=0;k--)
                    cout<<word[k];
                j=-1;
                cout<<" ";
            }
        }
        for(int k=j;k>=0;k--)
            cout<<word[k];
        cout<<endl;
    }
}
