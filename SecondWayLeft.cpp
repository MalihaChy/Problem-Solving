#include<bits/stdc++.h>
using namespace std;

int rep[100005];
vector<int>va;
int edg;
int a[100005];
struct edge
{
    int a, b, c;
} arr[100005];

bool cmp( edge x, edge y )
{
    return x.c < y.c;
}

void makeset(int n)
{
    for(int i=1; i<=n; i++) rep[i]=i;
}

bool Check_Connection(int n)
{
    int x=rep[1];
    for(int i=1;i<=n;i++)
    {
        if(x!=rep[i])return false;
    }
    return true;
}

int findr( int x )
{
    if( rep[x] == x ) return x;
    return rep[x] = findr( rep[x] );
}

int unio(int i,int sum)
{
    int x,y;
    x = findr( arr[i].a );
    y = findr( arr[i].b );
    if( x != y )
    {
        rep[x] = y;
        va.push_back(i);
        sum += arr[i].c;
    }
    return sum;
}

int unio2(int i,int sum)
{
    int x,y;
    x = findr( arr[i].a );
    y = findr( arr[i].b );
    if( x != y )
    {
        rep[x] = y;
        sum += arr[i].c;
        edg++;
    }
    return sum;
}

int main()
{
    int n, m;
    va.clear();
    int tc;
    cin>>tc;
    for(int tctc=1; tctc<=tc; tctc++)
    {
        cin >> n >> m;

        makeset(n);

        set< pair<int,int> >stst;
        int big,small;

        for( int i = 0; i < m; i++ )
        {
            int a, b, c ;
            cin >> a >> b >> c;
            arr[i].a = a;
            arr[i].b = b;
            arr[i].c = c;
            big=max(a,b);
            small=min(a,b);
            stst.insert(make_pair(big,small));
        }

        sort( arr, arr+m, cmp );

        int sum=0;
        for(int i=0; i<m; i++)
        {
            sum=unio(i,sum);
        }

        if(!Check_Connection(n))
            printf("Case #%d : No way\n",tctc);

        //if(stst.size()<n-1)
          //  printf("Case #%d : No way\n",tctc);

        else
        {
            //cout <<"MST: "<< sum << "\n"; //cost

            //cout<<"All other spanning trees:\n";




            int sec_best_mst=INT_MAX/3;
            //cout<<sec_best_mst<<"MOR"<<endl;
            sum=0;
            int j;
            for(j=0; j<va.size(); j++)
            {
                makeset(n);
                edg=0;
                for(int i=0; i<m; i++)
                {
                    if(i==va[j]) continue;
                    sum=unio2(i,sum);
                }
                if(edg!=n-1)
                {
                    sum=0;
                    continue;
                }
                //cout<<sum<<"\n" ;
                if(sec_best_mst>sum) sec_best_mst = sum;
                sum=0;
            }
            if(sec_best_mst!=INT_MAX/3)printf("Case #%d : %d\n",tctc,sec_best_mst);
            else printf("Case #%d : No second way\n",tctc);

            //cout<<"SEC BEST MST: "<<sec_best_mst<<"\n";

        }
        va.clear();
    }

}
