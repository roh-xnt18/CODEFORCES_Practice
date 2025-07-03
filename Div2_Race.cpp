#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define INF(t) numeric_limits<t>::max()

int main(){
    ios_base :: sync_with_stdio(false); cin.tie(0);

    int tc; cin >>tc;
    while(tc--){
        int a, x, y; cin>>a>>x>>y;
        if(min(x, y) <= a && a <= max(x, y)){
            cout << "NO\n";
        }
        else {
            cout <<"YES\n";
        }
    }
    return 0;
}
