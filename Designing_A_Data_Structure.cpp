#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    deque<int>dq;
    cin>>Q;
    getchar();
    while(Q--)
    {
        char str[100];
        //getchar();
        //gets(str);
        scanf("%s",str);
        if(str[0]=='I')
        {
            if(str[7]=='F')
            {
                char num[1000007];
                int j=0;
                for(int i=13; str[i]; i++)
                {
                    num[j]=str[i];
                    j++;
                }
                num[j]='\0';
                dq.push_front(atoi(num));
            }
            else
            {
                char num[1000007];
                int j=0;
                for(int i=12; str[i]; i++)
                {
                    num[j]=str[i];
                    j++;
                }
                num[j]='\0';
                dq.push_back(atoi(num));
            }
        }
        else
        {
            if(str[0]=='G')
            {
                if(str[4]=='F')
                {
                    cout<<dq.front()<<endl;
                }
                else
                {
                    if(str[4]=='B')
                        cout<<dq.back()<<endl;
                    else
                    {
                        vector<int>v;
                        while(!dq.empty())
                        {
                            v.push_back(dq.front());
                            dq.pop_front();
                        }
                        for(int i=0; i<v.size(); i++)
                            dq.push_back(v[i]);
                        sort(v.begin(),v.end());
                        if(str[5]=='a')
                        {
                            cout<<v[v.size()-1]<<endl;
                        }
                        else
                        {
                            cout<<v[0]<<endl;
                        }
                    }
                }
            }
            else
            {
                if(str[6]=='F')
                    dq.pop_front();
                else
                    dq.pop_back();
            }
        }
    }
}
