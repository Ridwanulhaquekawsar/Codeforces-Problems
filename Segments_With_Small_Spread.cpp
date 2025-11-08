#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n,k,l,cnt;
vector<ll>a;
multiset<ll>ml;

void solve(){
    cin>>n>>k;
    a.resize(n);
    
    for(auto &v : a) cin>>v;
    
    l=0;
    cnt=0;
    
    for(int r=0; r<n; r++){
        ml.insert(a[r]);
        
        while(*ml.rbegin() - *ml.begin()>k){
            ml.erase(ml.find(a[l])); // I have learned from here that we can't delete rbegin() by erase STL ! 
            l++;
        }
        
        // Here the max and min value changing dynamically ! 
        
        if(*ml.rbegin() - *ml.begin()<=k) cnt+=(r-l+1);
    }
    
    cout<<cnt<<nl;
}

int main(){
    FastIO(); solve();
}
