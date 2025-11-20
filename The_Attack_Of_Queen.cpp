#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n, row, col;
ll ans;

void solve(){
    cin >> n >> row >> col;
    
    ans = 0;
    
    ans += min(row - 1, col - 1);
    ans += min(row - 1, n - col);
    ans += min(n - row, col - 1);
    ans += min(n - row, n - col);
    
    ans += (n-1)*2;
    
    cout << ans << nl;
}

int main(){
    FastIO(); cin >> t; while(t--) solve();
}
