#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    nl = (k*l)/nl;
    c = c*d;
    p = p/np;
    cout<<min(nl, min(c, p))/n<<endl;
}
