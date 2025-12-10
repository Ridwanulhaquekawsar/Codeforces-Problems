#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n, q, key;
vector<ll>v;

void solve(){
    cin >> n;
    v.resize(n);
    
    for(auto &bx : v) cin >> bx;
    sort(v.begin(), v.end());
    
    cin >> q;
    
    while(q--){
        cin >> key;
        
        auto it = upper_bound(v.begin(), v.end(), key);
        
        cout << it - v.begin() << nl;
    }
}

int main(){
    FastIO(); solve();
}
