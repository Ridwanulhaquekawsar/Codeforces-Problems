#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n,mx_ac_sum,l,r;
vector<ll>prf_sum;

void solve(){
    cin>>n;
    prf_sum.resize(n+1);
    
    for(int i=1; i<=n; i++){
        cin>>prf_sum[i];
        prf_sum[i]+=prf_sum[i-1];
    }
    
    l=1;
    r=n;
    
    mx_ac_sum=0;
    
    while(l<r){
        if(prf_sum[l]<prf_sum[n]-prf_sum[r-1]) l++;
        if(prf_sum[n]-prf_sum[r-1]<prf_sum[l]) r--;
        
        if(l<r && prf_sum[l]==prf_sum[n]-prf_sum[r-1]){
            mx_ac_sum=max(mx_ac_sum,prf_sum[l]);
            
            l++;
            r--;
        }
    }
    
    cout<<mx_ac_sum;
}

int main(){
    FastIO(); solve(); return 0;
}
