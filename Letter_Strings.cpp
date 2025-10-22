#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int t,n; ll ans; vector<string>v;
string tmp_s;

void solve(){
    cin>>n;
    v.resize(n);
    ans=0;
    
    unordered_map<string,ll>mp;
    for(auto &s : v) cin>>s;
    
    for(auto &s : v){
        for(int i=0; i<2; i++){
            for(char c='a'; c<='k'; c++){
                tmp_s=s;
                
                if(tmp_s[i]==c) continue;
                
                tmp_s[i]=c; ans+=mp[tmp_s];
            }
        }
        
        mp[s]++;
    }
    
    cout<<ans<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>t;
    while(t--) solve();
}
