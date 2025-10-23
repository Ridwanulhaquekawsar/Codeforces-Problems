#include<bits/stdc++.h>
using namespace std;

long long t,n,ans,val; multiset<long long>ml;

void solve(){
    ml.clear(),ans=0;
    cin>>n;
    
    while(n--){
        cin>>val;
        
        if(val==0 &&! ml.empty()){
            ans+=*ml.rbegin();
            ml.erase(prev(ml.end()));
        }
        else{
            ml.insert(val);
        }
    }
    
    cout<<ans<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>t; while(t--) solve();
}
