#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n,k,l,cnt;
vector<ll>a;
unordered_map<ll,ll>mp;

void solve(){
    cin>>n>>k;
    a.resize(n);
    
    for(auto &b : a) cin>>b;
    
    cnt=0;
    l=0;
    
    for(int r=0; r<n; r++){
        mp[a[r]]++;
        
        while(mp.size()>k){
            mp[a[l]]--;
            
            if(mp[a[l]]==0) mp.erase(a[l]);
            
            l++;
        }
        
        cnt+=(r-l+1);
    }
    
    cout<<cnt<<nl;
}

int main(){
    FastIO(); solve();
}
