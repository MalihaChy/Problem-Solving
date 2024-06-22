#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll nPr(ll n)
{
    return n * (n - 1);
}
int main()
{
    ll p, q;
    cin >> p >> q;
    if ( nPr(q) < p)
        return puts("NO"), 0;
    else
    {
        puts("YES");
        int cnt = 0;
        vector < pair <int, int> > v;
        for ( int i = 1; i <= q; i++ )
        {
            for ( int j = i + 1; j <= q; j++ )
            {
                v.push_back(make_pair(i, j));
                v.push_back(make_pair(j, i));
                cnt += 2;
                if (cnt >= n) break;
            }
        }

        for ( int i = 0; i < p; i++ )
        {
            printf("%d %d\n", v[i].first, v[i].second);
        }
    }
    return 0;
}
