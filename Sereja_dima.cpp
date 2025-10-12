#include<bits/stdc++.h>
using namespace std;
int n,val,s_sum,d_sum; list<int>l;
bool s,d;

void solve(){
    cin>>n; 
    while(n--){
        cin>>val; l.push_back(val);
    }
    
    s_sum=0,d_sum=0; s=true;
    while(!l.empty()){
        if(l.front()>l.back()){
            if(s){
                s_sum+=l.front();
                s=false;
            }
            else{
                d_sum+=l.front();
                s=true;
            }
            
            l.pop_front();
        }
        else if((l.front()==l.back()) || (l.size()==1)){
            if(s){
                s_sum+=l.front();
                l.pop_front();
            }
            else{
                d_sum+=l.front();
                l.pop_front();
            }
        }
        else{
            if(s){
                s_sum+=l.back();
                s=false;
            }
            else{
                d_sum+=l.back();
                s=true;
            }
            
            l.pop_back();
        }
    }
    
    cout<<s_sum<<" "<<d_sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}
