#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t, n;
ll and_op;
ll val;

void solve(){
    cin >> n;
    n--;
    
    cin >> and_op;
    
    while(n--){
        cin >> val;
        and_op &= val;
    }
    
    cout << and_op << nl;
}

int main(){
    FastIO();
    
    cin >> t;
    while(t--) solve();
}
