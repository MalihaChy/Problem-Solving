#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t,n;
    cin>>t;
    vector<int>v;
    while(t--)
    {
        cin>>n;
        long long big=0,small=1000000000000000;
        int b_i,s_i;
        for(int i=1; i<=n; i++)
        {
            cin>>s;
            string a;
            for(int j=0; s[j]; j++)
            {
                if(s[j]!=':')
                {
                    a+=s[j];
                }
                else
                {
                    stringstream ss;
                    ss<<a;
                    ss.str(a);
                    int temp;
                    ss>>temp;
                    v.push_back(temp);
                    a.clear();
                }
            }
            stringstream ss;
            ss<<a;
            ss.str(a);
            int temp;
            ss>>temp;
            v.push_back(temp);
            a.clear();

            long long res=v[1]*12+v[2]*12+v[3]-v[4]*12;
            if(res>big)
            {
                big=res;
                b_i=v[0];
            }
            if(res<small)
            {
                small=res;
                s_i=v[0];
            }
            v.clear();

        }
        cout<<b_i<<" "<<s_i<<" "<<big-small<<endl;

    }
}
