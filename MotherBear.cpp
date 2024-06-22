#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a="DONE",b,c,d;
    while(getline(cin,b)){
        if(b==a)
            break;
        for(int i=0;b[i];i++){
            if(b[i]>='A'&&b[i]<='Z'||b[i]>='a'&&b[i]<='z')
                c+=b[i];
        }
        for(int i=0;c[i];i++)
            c[i]=toupper(c[i]);
        b=c;
        reverse(c.begin(),c.end());
        if(c==b)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
        b.clear();
        c.clear();
    }
}
