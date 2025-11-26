#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
vector<ll>a;
ll x;

void solve(){
    cin >> n;
    a.resize(n);
    
    x = 0;
    
    for(auto &bx : a){
        cin >> bx;
        x ^= bx;
    }
    
    if(n % 2) cout << x << nl;
    else{
        if(x) cout << -1 << nl;
        else cout << 1 << nl;
    }
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}
