#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[4];
    for(int i=0;i<4;i++){
        cin>>ar[i];
    }
    sort(ar,ar+4);
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            for(int k=j+1;k<4;k++){
                if(ar[i]+ar[j]>ar[k]){
                    printf("TRIANGLE\n");
                    return 0;
                }


            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            for(int k=j+1;k<4;k++){
                if(ar[i]+ar[j]==ar[k]){
                    printf("SEGMENT\n");
                    return 0;
                }


            }
        }
    }

    printf("IMPOSSIBLE\n");
    return 0;
}
