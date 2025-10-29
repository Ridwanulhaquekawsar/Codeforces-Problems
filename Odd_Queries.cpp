#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll t,n,q,l,r,k,sum,tmp;
vector<ll>prf_sum;

void solve(){
    cin>>n>>q;
    prf_sum.clear(),prf_sum.resize(n+1);
    
    prf_sum[0]=0;
    sum=0;
    
    for(int i=1; i<=n; i++){
        cin>>prf_sum[i];
        sum+=prf_sum[i];
        prf_sum[i]+=prf_sum[i-1];
    }
    
    
    while(q--){
        cin>>l>>r>>k;
        
        tmp=sum-(prf_sum[r]-prf_sum[l-1])+((r-l+1)*k);
        
        cout<<(tmp%2 ? "YES" : "NO")<<nl;
    }
}

int main(){
    FastIO(); cin>>t; while(t--) solve();
}
