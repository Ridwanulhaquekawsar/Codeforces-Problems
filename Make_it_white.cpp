#include<bits/stdc++.h>
using namespace std;
int t,n,l_idx,r_idx; string s;

void solve(){
    cin>>t;
    while(t--){
        cin>>n>>s;
        l_idx=s.find('B'); r_idx=s.rfind('B');
        cout<<(l_idx==r_idx ? 1 : (r_idx-l_idx+1))<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}
