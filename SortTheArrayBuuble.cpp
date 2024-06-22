/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,tm;
    vector<int>v;
    cin>>T;
    while(T--)
    {
        cin>>N;
        while(N--)
        {
            cin>>tm;
            v.push_back(tm);
        }
        sort(v.begin(),v.end());


        for(int i=0;i<v.size();)
        {
            cout<<v[i];
            i++;
            if(v.size()>i)
                cout<<" ";
        }
        cout<<endl;
        v.clear();
    }
}


*/



/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,tm;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int j=1;j<=n;j++){
    for(int i=0;i<n-1;i++){
        if(ar[i]>ar[i+1]){
            tm=ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=tm;

        }
    }
    for(int k=0;k<n;k++)
        cout<<ar[k]<<" ";
        cout<<endl;
    }
    //for(int k=0;j<n;j++)
        //cout<<ar[j]<<" ";
}


*/




#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10,tm,movement=0;
    int k=n;
    while(k!=0)
    {
        int t=0;
        for(int j=1;j<=k-1;j++){
            if(ar[j]>ar[j+1]){
                tm=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=tm;
                movement++;
            }
        }
    }
}
