#include<bits/stdc++.h>
using namespace std;
using st = set<int>;
int t,m,val,n,i,sz; string s; map<int,st>arr_fr;
map<char,st>str_fr; set<st>arr_st,str_st;

void solve(){
    cin>>t;
    
    while(t--){
        cin>>n;
        arr_fr.clear(),arr_st.clear();
        
        i=0;
        while(i<n){
            cin>>val;
            arr_fr[val].insert(i);
            i++;
        }
        
        for(auto &[x,s] : arr_fr) arr_st.insert(s);
        
        cin>>m;
        
        
        while(m--){
            cin>>s; 
            sz=s.size(),str_fr.clear(),str_st.clear();
            
            if(sz!=n){
                cout<<"NO"<<'\n';
            }
            else{
                i=0;
                while(i<sz){
                    str_fr[s[i]].insert(i);
                    i++;
                }
                
                for(auto &[c,s] : str_fr) str_st.insert(s);
                
                if(arr_st==str_st) cout<<"YES"<<'\n';
                else cout<<"NO"<<'\n';
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve(); return 0;
}
