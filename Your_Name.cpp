/* And certainly, We shall test you with something of fear, 
hunger, loss of wealth, lives and fruits. 
But give glad tidings to patient. -[Surah Al-Baqarah - 155] */
// • Starting in the name of Allah ! //

#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios_base::sync_with_stdio(false),cin.tie(nullptr);
using ll = long long int;

ll q,n; string s,t; map<char,int>mp_s,mp_t;

void solve(){
    mp_s.clear(),mp_t.clear();
    
    cin>>n>>s>>t;
    
    for(auto &c : s) mp_s[c]++;
    for(auto &c : t) mp_t[c]++;
    
    cout<<(mp_s==mp_t ? "YES" : "NO")<<'\n';
}

int main(){
    FastIO(); cin>>q; while(q--) solve();
}
