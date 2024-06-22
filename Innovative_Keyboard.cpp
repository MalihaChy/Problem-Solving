#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>v;
    int n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
}


import java.util.Scanner;


public final class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext())
        {
            int n = sc.nextInt();
            int h = -1;
            int index=0;
            String[] s = new String[n];
            sc.nextLine();
            for(int i=0;i<n;i++)
            {
                s[i] = sc.nextLine();
                if(s[i].length()>h)
                {
                    h = s[i].length();
                    index =i;
                }
            }
            int i=0;
            for( i=0;i<n;i++)
            {
                if(i!=index)
                {
                    if(s[index].contains(s[i])!=true)
                    {
                        System.out.println("Impossible");
                        break;
                    }
                }
            }
            if(i==n)
                System.out.println(h);
        }
    }
}
