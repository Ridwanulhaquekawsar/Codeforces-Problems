#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n, K;
vector<ll>a, bits(31);
ll ans, need;

void solve(){
    cin >> n >> K;
    a.resize(n), bits.assign(31, 0);

    for(auto &bx : a){
        cin >> bx;

        for(ll k = 30; k >= 0; k--) if((bx >> k) & 1LL) bits[k]++;
    }

    ans = 0;

    for(ll k = 30; k >= 0; k--){
        if(bits[k] == n) ans += (1LL << k);
        else{
            need = n - bits[k];

            if(need <= K){
                ans += (1LL << k);
                K -= need;
            }
        }
    }

    cout << ans << nl;
}

int main(){
    FastIO();

    cin >> t;
    while(t--) solve();
}
