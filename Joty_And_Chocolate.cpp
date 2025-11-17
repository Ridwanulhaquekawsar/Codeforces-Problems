#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n,a,b,p,q;
ll ans = 0;
ll l;

ll LCM(ll a,ll b){
    return (a/ __gcd(a, b))*b;
}

void solve(){
    cin>>n>>a>>b>>p>>q;
    
    l=LCM(a, b);
    ans = (n/a)*p + (n/b)*q - (p<q ? (n/l)*p : (n/l)*q);
    
    cout<<ans;
}

int main(){
    FastIO(); solve();
}
