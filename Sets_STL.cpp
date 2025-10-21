#include<bits/stdc++.h>
using namespace std;

int q,cmd,val; set<int>st;

void solve(){
    cin>>q;
    
    while(q--){
        cin>>cmd>>val;
        
        if(cmd==1) st.insert(val);
        else if(cmd==2) st.erase(val);
        else cout<<(st.count(val) ? "Yes" : "No")<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve(); return 0;
}
