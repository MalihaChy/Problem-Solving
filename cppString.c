#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<bits/stdc++.h>
using namespace std
    int main()
{
string a, b, c;
a = "this is a string"; // easy assigning
b = a; // copy hoye gelo! :O
c = a + b // c te rakhlam a ar b er concatation
    cout << c << endl; // print korlam
printf("%s\n", c.c_str() ); // printf diyei korlam na hoy

cout << c.size() << endl; // length print korlam
for(int i=0; i<c.size(); i++) cout << c[i] ;
// ekta ekta kore character print korlam

return 0;
}

