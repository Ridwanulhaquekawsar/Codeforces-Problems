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

ll t,n,a,b,ans;
vector<pair<ll, ll>>arr;
pbds<ll>pb;

void solve(){
    cin>>n;
    arr.resize(n);
    pb.clear();
    
    for(auto &bx : arr) cin>>bx.first>>bx.second;
    sort(arr.begin(),arr.end());
    
    ans=0;
    
    for(int i=0; i<n; i++){
        ans+=i-pb.order_of_key(arr[i].second);
        pb.insert(arr[i].second);
    }
    
    cout<<ans<<nl;
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
