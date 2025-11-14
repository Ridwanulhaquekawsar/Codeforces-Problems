#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll t,n;
pbds<pair<ll, ll>>pb;
vector<ll>a;

void solve(){
    cin>>n;
    a.resize(n);
    pb.clear();
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        pb.insert({a[i], i});
    }
    
    ll ans = 0;
    ll idx;
    
    for(int i=0; i<n; i++){
        idx = pb.order_of_key({a[i] + 1, 0});
        ans+=idx - 1;
        
        pb.erase({a[i], i});
    }
    
    cout<<ans<<nl;
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
