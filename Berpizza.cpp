#include<bits/stdc++.h>
using namespace std;
using pr = pair<int,int>;
int q,val,cmd,i,j,tmp_val,tmp_idx; multiset<pr>ml;

class cmp{
    public:
    bool operator()(const pr &l,const pr r)const{
        return l.first==r.first ? l.second<r.second : l.first>r.first;
    }    
};

void solve(){
    cin>>q;
    multiset<pr,cmp>ml_mx;
    
    i=1,j=1;
    while(i<=q){
        cin>>cmd;
        
        if(cmd==1){
            cin>>val;
            ml_mx.insert({val,j}),ml.insert({j,val});
            j++;
        }
        else if(cmd==2){
            tmp_val=ml.begin()->second;
            tmp_idx=ml.begin()->first;
            
            auto it=ml_mx.find({tmp_val,tmp_idx});
            ml_mx.erase(it);
            ml.erase(ml.begin());
            
            cout<<tmp_idx<<'\n';
        }
        else{
            tmp_val=ml_mx.begin()->first;
            tmp_idx=ml_mx.begin()->second;
            
            auto it=ml.find({tmp_idx,tmp_val});
            ml.erase(it);
            ml_mx.erase(ml_mx.begin());
            
            cout<<tmp_idx<<'\n';
        }
        
        i++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve(); return 0;
}
