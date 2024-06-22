#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int cnt=0;
    if(x==1)
        cout<<0<<endl;
    if(x==2)
        cout<<1<<endl;
    else{
        while(1)
        {
            if(x%3==2){
                x++;
                cnt++;
            }
            else{
                if(x%3==1)
                {
                    x--;
                    cnt++;
                }
                else{
                    if(x%3==0)
                    {
                        x=x/3;
                        cnt++;
                    }
                }
            }
            if(x==1)
            {
                cout<<cnt<<endl;
                break;
            }
            if(x==2){
                cout<<cnt+1<<endl;
                break;
            }
        }
    }
}
