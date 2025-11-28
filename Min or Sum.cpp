#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
vector<ll>a;
ll ans;

void solve(){
    cin >> n;
    a.resize(n);
    
    ans = 0;
    
    for(auto &bx : a){
        cin >> bx;
        ans |= bx;
    }
    
    cout << ans << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}
