#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    gets(str);
    char num[100];
    int j=0;
    //cout<<8+atoi(str);
    for(int i=6;str[i];i++)
    {
        num[j]=str[i];
        j++;
        //cout<<endl;
    }
    num[j]='\0';
    //puts(num);
    cout<<atoi(num);
    //for(int i=0;num[i];i++){
      //  cout<<num[i];
        //cout<<endl;
   // }
    //int x=atoi(num);
    //cout<<x;
}
