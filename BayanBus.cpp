#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a="+------------------------+";
    string b="|#.#.#.#.#.#.#.#.#.#.#.|D|)";
    string c="|#.#.#.#.#.#.#.#.#.#.#.|.|";
    string d="|#.......................|";
    string e="|#.#.#.#.#.#.#.#.#.#.#.|.|)";

    int k;
    cin>>k;


    for(int i=0,p=1;i<k;p+=2)
    {
        b[p]='O';
        i++;
        if(i==k)break;
        c[p]='O';
        i++;
        if(i==k)break;
        if(p==1){
            d[p]='O';
            i++;
        }
        if(i==k)break;
        e[p]='O';
        i++;

    }
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<a<<endl;

}
