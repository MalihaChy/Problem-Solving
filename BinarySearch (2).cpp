#include<bits/stdc++.h>
using namespace std;

void BinarySearch()
{
    int high,low,mid,value;
    int ar[12];
    for(int i=0;i<12;i++)
        ar[i]=100*(i+1);
    ar[1]=400;
    ar[2]=400;
    ar[4]=400;

    for(int i=0;i<12;i++)
        cout<<ar[i]<<endl;

    high=11;
    low=0;

    cin>>value;
    while(low<=high){
        mid=(high+low)/2;
        if(ar[mid]>value)
            high=mid-1;
        else{
            if(ar[mid]<value)
                low=mid+1;
            else{
                cout<<mid<<endl;
                cout<<low<<endl;
                cout<<high<<endl;
                break;
            }
        }
    }
}

int main()
{
    BinarySearch();
}
