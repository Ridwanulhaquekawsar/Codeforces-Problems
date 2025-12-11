#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n, m;
vector<ll>a;
vector<ll>prf_sum;
ll key;

void solve(){
    cin >> n;
    a.resize(n);
    prf_sum.resize(n);
    
    for(auto &bx : a) cin >> bx;
    
    prf_sum[0] = a[0];
    for(ll i = 1; i < n; i++) prf_sum[i] = prf_sum[i - 1] + a[i];
    
    cin >> m;
    
    while(m--){
        cin >> key;
        
        auto it = lower_bound(prf_sum.begin(), prf_sum.end(), key);
        
        cout << (it - prf_sum.begin()) + 1 << nl;
    }
}

int main(){
    FastIO(); solve();
}
