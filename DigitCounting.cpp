#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc, n;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string s;
        for(int i =1; i<=n; i++)
        {
            stringstream ss;
            ss << i;
            s+=ss.str();
        }
        int sz = s.size();
        int ar[10];
        memset(ar, 0, sizeof(ar));
        for(int i=0; i<sz; i++)
        {
            char c = s[i];
            switch(c)
            {
            case '0':
                ar[0]++;
                break;
            case '1':
                ar[1]++;
                break;
            case '2':
                ar[2]++;
                break;
            case '3':
                ar[3]++;
                break;
            case '4':
                ar[4]++;
                break;
            case '5':
                ar[5]++;
                break;
            case '6':
                ar[6]++;
                break;
            case '7':
                ar[7]++;
                break;
            case '8':
                ar[8]++;
                break;
            case '9':
                ar[9]++;
                break;
            }
        }
        cout<<ar[0];
        for(int i =1; i<10; i++)
            cout<<" "<<ar[i];
        cout<<endl;
    }
}
