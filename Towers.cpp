#include<bits/stdc++.h>
using namespace std;

int cubes_num,sz; multiset<int>ml;

void solve(){
    cin>>cubes_num;
    
    while(cubes_num--){
        cin>>sz;
        
        auto it=ml.upper_bound(sz);
        if(it!=ml.end()) ml.erase(it);
        
        ml.insert(sz);
    }
    
    cout<<ml.size();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve(); return 0;
}
