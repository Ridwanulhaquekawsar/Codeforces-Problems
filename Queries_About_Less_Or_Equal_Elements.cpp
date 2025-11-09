#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n,m,cnt,l,r;
bool flag;
vector<ll>a,b,tmp;
map<ll,ll>mp;

void solve(){
    cin>>n>>m;
    a.resize(n),b.resize(m),tmp.resize(m);
    
    for(auto &bx : a) cin>>bx;
    for(auto &bx : b) cin>>bx;
    
    sort(a.begin(),a.end());
    
    tmp=b;
    
    sort(b.begin(),b.end());
    
    l=0;
    r=0;
    cnt=0;
    flag=false;
    
    while(r<m){
        while(a[l]<=b[r]){
            cnt++;
            l++;
            
            if(l==n){
                mp[b[r++]]=cnt;
                
                flag=true;
                break;
            }    
        }
        
        if(flag) break;
        
        mp[b[r++]]=cnt;
    }
    
    while(r<m) mp[b[r++]]=cnt;
    
    for(auto &v : tmp) cout<<mp[v]<<" ";
}

int main(){
    FastIO(); solve();
}
