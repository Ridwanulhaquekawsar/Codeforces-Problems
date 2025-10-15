#include<bits/stdc++.h>
using namespace std;
int t,n,i,cnt;

void solve(){
    cin>>t;
    map<int,int>fr;
    vector<int>a;
    
    while(t--){
        cin>>n;
        fr.clear(),a.clear();
        a.resize(n);
        
        i=0;
        while(i<n){
            cin>>a[i];
            i++;
        }
        
        i=n-1; cnt=0;
        while(i>=0){
            fr[a[i]]++;
            if(fr[a[i]]>1) break;
            
            cnt++;
            
            i--;
        }
        
        
        cout<<n-cnt<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}
