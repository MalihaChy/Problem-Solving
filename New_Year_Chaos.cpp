#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n+1];
        ar[0] = -1;
        int flag = 0;
        for(int i=1;i<=n;i++)cin>>ar[i];
        for(int i=1;i<=n;i++)
        {
            if(abs(ar[i]-i) > 2)
            {
                cout<<"Too chaotic\n";
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            int x;
            int idx, cnt = 0;
            for(int i=1;i<=n;i++)
            {
                x = ar[i];
                idx = -1;
                for(int j=i;j<=n;j++)
                {
                    if(x>ar[j])
                    {
                        x = ar[j];
                        idx = j;
                    }
                }
                if(idx != -1){
                    swap(ar[idx], ar[i]);
                    //for(int i=1;i<=n;i++)cout<<ar[i];
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
        //for(int i=1;i<=n;i++)cout<<ar[i];
    }
}
