/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        vector<int>v;
        for(int i=0;i<n;i++){
            if(i&1){
                int tem=0;
                for(int j=i;j<n;j++)
                    tem^=ar[j];
                v.push_back(tem);
            }
            else{
                int tem=0;
                for(int j=i+1;j<n;j++){
                    tem^=ar[j];
                }
                v.push_back(tem);
            }
        }
        int tem=0;
        for(int i=0;i<v.size();i++)
            tem^=v[i];
        cout<<tem<<endl;
    }
}

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        int xor_op[n];
        xor_op[n-1]=ar[n-1];
        for(int i=n-2; i>=0; i--)
            xor_op[i]=ar[i]^xor_op[i+1];
        int ans=0;
        int p=n-1;
        for(int i=0; i<n-1; i++)
        {
            if((p-i)&1)
            {
                ans^=xor_op[i];
            }
            else
            {
                ans^=xor_op[i+1];
            }
        }
        cout<<ans<<endl;
    }
}
























