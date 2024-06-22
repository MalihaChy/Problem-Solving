#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=1;i<n;i++){
            double a=i/pow(n-i,0.5);
            int b=i/pow(n-i,0.5);
            if(a-b==0.00)
                v.push_back(i);
        }
        printf("Case %d: %d",j,v[0]);
        for(int i=1;i<v.size();i++)
            cout<<" "<<v[i];
        cout<<endl;
    }
}
