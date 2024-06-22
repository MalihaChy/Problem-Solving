

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt=0,x;
    double sum=0;
    string s;
    char c;

    //scanf("%[^]%*c",s);
    while(cin>>c){
        //cin>>c;
        getline(cin,s);
        if(s.size()==0)break;
        cin>>x;
        cnt++;
        sum+=x;
        //printf("%.1lf\n",sum/cnt);
    }
    printf("%.1lf\n",sum/cnt);
}



/////////////////////////////// TLE //////////////////

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt=0,x;
    double sum=0;
    char s[1000];
    char c;

    //scanf("%[^]%*c",s);
    while(getchar()){
        //cin>>c;
        gets(s);
        if(strlen(s)==0)break;
        cin>>x;
        cnt++;
        sum+=x;
        //printf("%.1lf\n",sum/cnt);
    }
    printf("%.1lf\n",sum/cnt);
}
*/
