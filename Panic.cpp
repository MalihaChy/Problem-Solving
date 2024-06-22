#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[110];
    gets(str);
    int flag=0;
    for(int i=0;str[i];i++){
        if(str[i]!='A'&&str[i]!='.'&&str[i]!='!'){
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"No panic\n";
    else
        cout<<"Panic!\n";
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    char ch;
    bool cond1, cond2;
    cond1 = cond2 = false;
    /*
    while(cin >> ch){
        if(ch!='A' || ch!='!'){
            break;
        }
        str.push_back(ch);
    }
    */

    cin >> str;

    int i=0;

    if(str[0]=='A')
        cond1 = true;
    while(str[i]=='A' && i<str.size()){
        i++;
    }
    if(str[i]=='!'){
        cond2 = true;
    }
    while(str[i]=='!' && i<str.size()){
        i++;
    }
    if(i != str.size()){
        cond2 = false;
    }
    if(cond1 && cond2){
        puts("Panic!");
    }
    else{
        puts("No panic");
    }
    return 0;
}
