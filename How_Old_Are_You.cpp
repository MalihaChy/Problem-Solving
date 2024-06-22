#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        string day1, month1, year1,day2,month2,year2;
        getchar();
        getline(cin,day1,'/');
        getline(cin,month1,'/');
        getline(cin,year1);
        getline(cin,day2,'/');
        getline(cin,month2,'/');
        getline(cin,year2);
        stoi(day1,10);
        stoi(day2,10);
        cout<<day1-day2<<endl;
    }
}
