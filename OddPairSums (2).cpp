#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,tm;
    scanf("%d",&N);
    int ar[N];

    for(int i=0;i<N;i++){
        scanf("%d",&tm);
        if(tm&1)
            ar[i]=1;
        else
            ar[i]=0;
    }
    vector<int>v;
    v.push_back(ar[0]);
    for(int i=1,j=0;i<N;i++){
        if(v[j]!=ar[i]){
            v.push_back(ar[i]);
            j++;
        }
    }
    printf("%d\n",N-v.size());

}

/////////////////////////////////////////////////////////////////////////////////////////
int main() {
    int N, val;
    cin >> N >> val;

    int ans = 0;

    for (int i = 1; i < N; ++i) {
        int newVal;
        cin >> newVal;

        if ((newVal % 2) == (val % 2)) {
            ++ans;
        }
        val = newVal;
    }
    cout << ans << "\n";
    return 0;
}
