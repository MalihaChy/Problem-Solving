#include<bits/stdc++.h>
using namespace std;

int main()
{

    map<char, int>m;
    int x = 10;
    char c;
    while(x--)
    {
        cin>>c;
        m[c]++;
    }
    /// highest frequency ///
    int mx = 0;
    for(map<char, int> ::iterator it=m.begin(); it!=m.end(); it++)
    {
        if(it->second > mx)mx = it->second;
    }
    for(map<char, int> ::iterator it=m.begin(); it!=m.end(); it++)
    {
        if(it->second == mx)cout<<it->first<<endl;
    }
    /// each frequency ///
    for(map<char, int> ::iterator it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;;
    }
    /// find out the duplicates ///
    for(map<char, int> ::iterator it=m.begin(); it!=m.end(); it++)
    {
        if(it->second > 1)cout<<it->first<<endl;
    }


    bool flag = true;
    for(int i=1, j=1; i<20; i++)
    {
        cout<<j<<" ";
        if(flag)j++;
        else if(!flag)j--;
        if(j==10)flag=false;
    }
    cout<<endl;

    for(int i=3;i<=200;i+=3)cout<<i<<" ";
    cout<<endl;


    string s;
    getline(cin, s);
    int sz = s.size();
    for(int i=sz-1;i>=0;i--)cout<<s[i];
    cout<<endl;


    string s;
    getline(cin, s);
    int sz = s.size();
    vector<string>v;
    string temp = "";
    for(int i=0;i<sz;i++)
    {
        if(s[i]==' '){
            reverse(temp.begin(), temp.end());
            v.push_back(temp);
            temp = "";
        }
        else temp+=s[i];
    }
    reverse(temp.begin(), temp.end());
    v.push_back(temp);
    sz = v.size();
    for(int i=0;i<sz;i++)cout<<v[i]<<" ";
    cout<<endl;



    freopen("input.txt", "r", stdin);
    int x, sum=0;
    while((scanf("%d", &x))!=EOF)sum+=x;
    cout<<sum;
}
