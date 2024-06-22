#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int ar[n];
        double sum=0.0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        double cnt=0;
        double avg=sum/n;
        for(int i=0;i<n;i++){
            if(ar[i]>avg)
                cnt++;
        }
        printf("%.3lf",(cnt/n)*100);
        cout<<"%\n";
    }
}
