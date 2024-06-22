#include<bits/stdc++.h>
using namespace std;

int main()
{
    char N[1050];
    while(1){
        scanf("%s",&N);
        int sum=0;
        if(N[0]==0)
            break;
        else{
            for(int i=0;N[i];i++){
                sum+=(N[i]-48);
            }
            int cnt=0;
            if(sum%9==0){
                    //cout<<sum;

                char old[100];
                itoa(sum,old,10);
                cout<<old;
               /* int r=sum/9;
                cnt++;
                while(r!=9){
                    int remainder;
                    while(remainder!=0){
                        r+=(r/10);
                    }
                }    */
            }
        }
    }

   // for(int i=0;N[i];i++)
     //   cout<<N[i];
   // if(!N)
     //   cout<<"hello";
}
