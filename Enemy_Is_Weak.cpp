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

ll n,ans;
pbds<ll>pb;
vector<ll>a,l,r;

void solve(){
    cin>>n;
    a.resize(n),l.resize(n),r.resize(n);
    
    for(int i=0; i<n; i++){
        cin>>a[i];
        l[i]=pb.size()-pb.order_of_key(a[i]);
        
        pb.insert(a[i]);
    }
    
    pb.clear();
    ans=0;
    
    for(int i=n-1; i>0; i--){
        r[i]=pb.order_of_key(a[i]);
        ans+=(l[i]*r[i]);
        
        pb.insert(a[i]);
    }
    
    cout<<ans;    
}

int main(){
    FastIO(); solve();
}
