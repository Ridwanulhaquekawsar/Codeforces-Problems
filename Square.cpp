/* And certainly, We shall test you with something of fear, 
hunger, loss of wealth, lives and fruits. 
But give glad tidings to patient. -[Surah Al-Baqarah - 155] */
// • Starting in the name of Allah ! //

#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios_base::sync_with_stdio(false),cin.tie(nullptr);
using ll = long long int;

int t,val;

void solve(){
    cin>>t;
    
    map<int,int>mp;
    while(t--){
        mp.clear();
        
        for(int i=0; i<4; i++){
            cin>>val;
            mp[val]++;
        }
        
        cout<<(mp.size()==1 ? "YES" : "NO")<<'\n';
    }
}

int main(){
    FastIO(); solve();
}
