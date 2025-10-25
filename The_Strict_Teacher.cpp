#include<bits/stdc++.h>
using namespace std;

int t,line_sz,teach_pos_num,stu_pos_num;
int teach_pos,stu_pos,mid,upper,lower;
set<int>st;

void solve(){
    cin>>line_sz>>teach_pos_num>>stu_pos_num;
    st.clear();
    
    while(teach_pos_num--){
        cin>>teach_pos;
        st.insert(teach_pos);
    }
    
    while(stu_pos_num--){
        cin>>stu_pos;
        auto it_1st=*st.begin(),it_lst=*st.rbegin();
        
        if(stu_pos<it_1st) cout<<it_1st-1<<'\n';
        else if(stu_pos>it_lst) cout<<line_sz-it_lst<<'\n';
        else{
            auto it=st.upper_bound(stu_pos),it_1=prev(it);
            upper=*it,lower=*it_1;
            
            mid=(upper+lower)/2;
            cout<<min(abs(mid-lower),abs(mid-upper))<<'\n';
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    
    cin>>t; while(t--) solve();
}
