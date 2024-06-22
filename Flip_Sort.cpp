#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        int ar[n],flip=0;
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(ar[i]>ar[j]){
                    flip++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",flip);
    }
}
