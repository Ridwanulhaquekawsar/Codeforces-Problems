#include<bits/stdc++.h>
using namespace std;

int t,n,val,ans; map<int,int>mp;
vector<int>arr;

void solve(){
    cin>>n;
    arr.resize(n),mp.clear();
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    
    sort(arr.begin(),arr.end());
    
    ans=0;
    for(int i=0; i<n; i++){
        val=arr[i];
        
        if(mp[val]!=0){
            ans++;
            
            while(mp[val]>0){
                mp[val]--;
                val++;
            }
        }    
    }
    
    cout<<ans<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>t; while(t--) solve();
}
