#include<stdio.h>
#include<string>
#include<iostream>
#include<stack>
#include<deque>
using namespace std;

int bigmod(int a,int b,int M){
    if(b==0)
        return 1;
    if(b%2==0){
        int x=bigmod(a,b/2,M);
        x=((x%M)*(x%M))%M;
        return x;
    }
    else{
        int x=bigmod(a,b-1,M);
        x=((a%M)*(x%M))%M;
        return x;
    }
}

int main()
{
    //int a=bigmod(10,7,7);
    /*string str;
    cin >> str;
    cout << str << endl;
    cin >> a;
    cout << a << endl;*/

    /*stack<int>s;
    for(int i=0;i<5;i++){
        cin>>a;
        s.push(a);
    }
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;*/


    for(int i=1;i<=10000;i++)
        //printf("%d\n",i);
        cout<<i<<endl;
    //cout<<a<<endl;
}
