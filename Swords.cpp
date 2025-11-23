#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n, mx;
vector<ll>a;
ll g = 0;
ll totalDiff;
ll d;

void solve(){
    cin >> n;
    a.resize(n);
    
    mx = 0;
    
    for(auto &bx : a){
        cin >> bx;
        mx = max(mx, bx);
    }
    
    totalDiff = 0;
    d = 0;
    
    for(auto &x : a){
        d = mx - x;
        
        totalDiff += d;
        
        g = __gcd(g, d);
    }
    
    cout << totalDiff/g << " " << g;
}

int main(){
    FastIO(); 
    
    solve();
}
