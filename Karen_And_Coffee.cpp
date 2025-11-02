#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n,k,q,l,r;
vector<ll>prf_sum(200002),prf_arr(200002);

void solve(){
    cin>>n>>k>>q;
    
    while(n--){
        cin>>l>>r;
        
        prf_sum[l]++;
        prf_sum[r+1]--;
    }
    
    for(int i=1; i<=200002; i++){
        prf_sum[i]=prf_sum[i]+prf_sum[i-1];
        
        if(prf_sum[i]>=k) prf_arr[i]=prf_arr[i-1]+1;
        else prf_arr[i]=prf_arr[i-1];
    }
    
    while(q--){
        cin>>l>>r;
        
        cout<<prf_arr[r]-prf_arr[l-1]<<nl;
    }
}

int main(){
    FastIO(); solve();
}
