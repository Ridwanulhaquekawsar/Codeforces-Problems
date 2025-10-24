#include<bits/stdc++.h>
using namespace std;

int t,n,m,idx; set<int>st;
string s,updated;

void solve(){
    cin>>n>>m>>s;
    st.clear();
    
    while(m--){
        cin>>idx;
        st.insert(idx);
    }
    
    cin>>updated;
    sort(updated.begin(),updated.end());
    
    idx=0;
    for(auto &pos : st){
        s[pos-1]=updated[idx];
        idx++;
    }
    
    cout<<s<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>t; while(t--) solve();
}
