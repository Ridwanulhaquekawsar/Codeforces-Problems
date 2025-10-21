#include<bits/stdc++.h>
using namespace std;

int t,n,i,segment,idx; vector<int>arr;
set<int>st;

void solve(){
    cin>>t;
    
    while(t--){
        cin>>n;
        arr.resize(n),st.clear();
        
        for(int i=0; i<n; i++) cin>>arr[i];
        
        i=1,segment=1,idx=0;
        st.insert(arr[0]);
        
        while(i<n){
            if(st.find(arr[i])!=st.end()) st.erase(arr[i]);
            
            if(st.empty()){
                segment++;
                for(int j=idx; j<=i; j++) st.insert(arr[j]);
                
                idx=i;
            }
            
            i++;
        }
        
        cout<<segment<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve(); return 0;
}
