#include<bits/stdc++.h>
using namespace std;
int t,i,n,g1,g2; string a,b;

void solve(){
    cin>>t;
    
    while(t--){
        cin>>n>>a>>b; g1=0,g2=0;
        
        i=0;
        while(i<n){
            if(i%2){
                if(a[i]=='0') g1++;
            }
            else{
                if(a[i]=='0') g2++;
            }
            
            i++;
        }
        
        i=0;
        while(i<n){
            if(i%2){
                if(b[i]=='0') g2++;
            }
            else{
                if(b[i]=='0') g1++;
            }
            
            i++;
        }
        
        
        if(n%2){
            cout<<(g1>=n/2 && g2>=(n/2)+1 ? "YES" : "NO")<<'\n';
        }
        else{
            cout<<(g1>=n/2 && g2>=n/2 ? "YES" : "NO")<<'\n';
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); solve();
    return 0;
}
