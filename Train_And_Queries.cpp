#include<bits/stdc++.h>
using namespace std;
int t,n,q,l_val,r_val,i; map<int,vector<int>>mp;
vector<int>arr;

void solve(){
    cin>>t;
    
    while(t--){
        cin>>n>>q;
        mp.clear(),arr.clear(),arr.resize(n+1);
        
        i=1;
        while(i<=n){
            cin>>arr[i];
            //if(mp[arr[i]]==0) mp[arr[i]]=i;
            if(mp[arr[i]].empty()){
                mp[arr[i]].resize(2,0);
                mp[arr[i]][0]=i;
            }
            else mp[arr[i]][1]=i;
            
            i++;
        }
        
        
        while(q--){
            cin>>l_val>>r_val; 
            if(mp[l_val].empty() || mp[r_val].empty()) cout<<"NO"<<'\n';
            else{
                if(mp[r_val][1]==0) cout<<(mp[l_val][0]<mp[r_val][0] ? "YES" : "NO")<<'\n';
                else cout<<(mp[l_val][0]<mp[r_val][1] ? "YES" : "NO")<<'\n';
            }    
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve(); return 0;
}
