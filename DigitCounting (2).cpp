#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a;
        //char b[10];
        for(int i=1; i<=n; i++)
        {
            //to_string(i);
            //itoa(i,b,10);

            stringstream ss;
            ss << i;
            string str = ss.str();
            a+=str;
        }
        int c=0,d=0,e=0,f=0,g=0,h=0,z=0,j=0,k=0,l=0;
        for(int i=0; a[i]; i++)
        {
            if(a[i]=='0')
                c++;
            else
            {
                if(a[i]=='1')
                    d++;
                else
                {
                    if(a[i]=='2')
                        e++;
                    else
                    {
                        if(a[i]=='3')
                            f++;
                        else
                        {
                            if(a[i]=='4')
                                g++;
                            else
                            {
                                if(a[i]=='5')
                                    h++;
                                else
                                {
                                    if(a[i]=='6')
                                        z++;
                                    else
                                    {
                                        if(a[i]=='7')
                                            j++;
                                        else
                                        {
                                            if(a[i]=='8')
                                                k++;
                                            else
                                            {
                                                if(a[i]=='9')
                                                    l++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<z<<" "<<j<<" "<<k<<" "<<l<<endl;
    }
}
