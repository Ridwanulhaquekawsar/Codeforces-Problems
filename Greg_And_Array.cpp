#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n,m,k,l,r,val;
vector<pair<pair<ll,ll>, ll>>op_arr;
vector<ll>arr,prf_sum,prf_sum_ans;

void solve(){
    cin>>n>>m>>k;
    op_arr.resize(m),arr.resize(n+1);
    prf_sum.resize(m+2),prf_sum_ans.resize(n+2);
    
    for(ll i=1; i<=n; i++) cin>>arr[i];
    
    for(ll i=0; i<m; i++){
        cin>>l>>r>>val;
        
        op_arr[i].first={l,r};
        op_arr[i].second=val;
    }
    
    
    while(k--){
        cin>>l>>r;
        
        prf_sum[l]++;
        prf_sum[r+1]--;
    }
    
    for(ll i=1; i<=m; i++) prf_sum[i]=prf_sum[i]+prf_sum[i-1];
    
    ll j=1;
    for(auto &[range,val] : op_arr){
        prf_sum_ans[range.first]+=(val*prf_sum[j]);
        prf_sum_ans[range.second+1]-=(val*prf_sum[j]);
        
        j++;
    }
    
    for(ll i=1; i<=n; i++) prf_sum_ans[i]=prf_sum_ans[i]+prf_sum_ans[i-1];
    
    for(ll i=1; i<=n; i++) cout<<arr[i]+prf_sum_ans[i]<<" ";
}

int main(){
    FastIO(); solve();
}
