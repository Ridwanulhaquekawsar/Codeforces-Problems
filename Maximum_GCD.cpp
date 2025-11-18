#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t,n;

void solve(){
    cin>>n;
    
    if(n % 2) cout<<(n-1)/2<<nl;
    else cout<<n/2<<nl;
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
