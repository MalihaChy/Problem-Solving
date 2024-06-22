#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,tm;
    scanf("%d%d",&n,&x);
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tm);
        v.push_back(tm);
    }
    v.push_back(x);
    sort(v.begin(),v.end());


    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            printf("%d\n",i+1);
            return 0;
        }
    }


/*
    int high,low,mid,ans;
    low=0;
    high=v.size()-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(v[mid]>x)
            low=mid+1;
        else
        {
            if(v[mid]<x)
                high=mid-1;
            else
            {
                //ans=mid;
                break;
            }
        }

    }
    //for(int i=0;i<=n;i++)
      //  printf("%d ",v[i]);
    //cout<<endl;
    printf("%d\n",mid+1);*/
}
