#include<bits/stdc++.h>
using namespace std;

int t,x,y,n;

void solve(){
    cin>>t;
    
    while(t--){
        cin>>n;
        
        x=n,y=n-2;
        cout<<2<<'\n'<<n<<" "<<n-1<<'\n';
        n-=2;
        
        while(n--){
            cout<<x<<" "<<y<<'\n';
            x--,y--;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve(); return 0;
}
