#include<stdio.h>
#include<string>
#include<iostream>
#include<stack>
#include<deque>

#include<bits/stdc++.h>
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
    int a=bigmod(10,7,7);
    cout<<a;
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
    /*
    int a,b,M;
    scanf("%d%d%d",&a,&b,&M);
    int ans=bigmod(a,b,M);
    printf("%d",ans);
*/
    //for(int i=1;i<=10000;i++)
        //printf("%d\n",i);
       // cout<<i<<endl;
    //cout<<a<<endl;

/*    queue< int > q;
    q.push( 100 ); // inserting 100
    q.push( 101 ); // inserting 101
    q.push( 102 ); // inserting 102

    while( !q.empty() ) {
        cout << q.front() << endl; // printing the front
        q.pop(); // removing that one
    }*/

    /*

set< int > s;
    s.insert( 10 ); s.insert( 5 ); s.insert( 9 );

    set< int > :: iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;
    }

    */
}
