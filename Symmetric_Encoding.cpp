#include<bits/stdc++.h>
using namespace std;
int t,n,i,tmp,auxi_sz; string s; 
vector<char>auxi_box;

void solve(){
    cin>>t;
    set<char>st; map<char,char>mirror;
    
    while(t--){
        cin>>n>>s;
        st.clear(),mirror.clear();
        auxi_box.clear();
        
        for(auto &c : s) st.insert(c);
        for(auto &c : st) auxi_box.push_back(c);
        
        
        auxi_sz=auxi_box.size();
        if(auxi_sz%2==0) tmp=(auxi_sz/2)-1;
        else tmp=auxi_sz/2;
        
        
        i=0;
        while(i<=tmp){
            mirror[auxi_box[i]]=auxi_box[auxi_sz-1-i];
            mirror[auxi_box[auxi_sz-1-i]]=auxi_box[i];
            i++;
        }
        
        
        for(auto &c : s) cout<<mirror[c];
        cout<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}


★★★★✪→★★★★✪→★★★★✪→★★★★✪


#include<bits/stdc++.h>
using namespace std;
int t,n,i,tmp,auxi_sz; string s; 
vector<char>auxi_box;

void solve(){
    cin>>t;
    set<char>st; map<char,char>mirror;
    
    while(t--){
        cin>>n>>s;
        st.clear(),mirror.clear();
        auxi_box.clear();
        
        for(auto &c : s) st.insert(c);
        for(auto &c : st) auxi_box.push_back(c);
        
        
        auxi_sz=auxi_box.size();
        
        i=0;
        while(i<auxi_sz){
            mirror[auxi_box[i]]=auxi_box[auxi_sz-1-i];
            i++;
        }
        
        
        for(auto &c : s) cout<<mirror[c];
        cout<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}
