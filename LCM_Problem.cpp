#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, l, r;

void solve(){
    cin >> l >> r;
    
    if(2 * l > r) cout << -1 << " " << -1 << nl;
    else cout << l << " " << 2 * l << nl;
}

int main(){
    FastIO(); cin >> t; while(t--) solve();
}
