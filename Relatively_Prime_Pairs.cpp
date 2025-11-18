#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll l,r;

void solve(){
    cin>>l>>r;
    
    cout<<"YES"<<nl;
    for(ll i=l; i<r; i+=2) cout<<i<<" "<<i+1<<nl;
}

int main(){
    FastIO(); solve();
}
