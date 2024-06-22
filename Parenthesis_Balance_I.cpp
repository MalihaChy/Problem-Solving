#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[10000];
    //while(scanf("%s",&str)!=EOF){
    //gets(str);
       scanf("%s",&str);
        stack<char>s;
        s.push('#');
        int flag=0;
    int l=strlen(str);
        for(int i=0;i<l;i++){
            //cout<<"H";
            //cout<<s.top();
            if(str[i]=='('){
               cout<<s.top();
                s.push('(');

               }

            if(str[i]==')'){
                if(s.top()=='(')
                {
                    s.pop();
                }
                else{
                    cout<<"incorrect\n";
                    flag=1;
                }
            }
            if(s.top()=='#'&& flag==0){
                cout<<"correct\n";
                i=l;
            }

        }
        if(flag==0 && s.top()=='(')
            cout<<"incorrect\n";
        //s.
   // }
}
