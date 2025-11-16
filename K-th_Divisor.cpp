#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

ll n,k;
vector<ll>a;

void solve(){
    cin>>n>>k;

    for(ll i=1; i*i<=n; i++){  
        if(n % i == 0){  
            a.push_back(i);  
            if(n/i != i) a.push_back(n/i);  
        }  
    }  
  
    sort(a.begin(),a.end());  
  
    cout<<(k>a.size() ? -1 : a[k-1]);

}

int main(){
    FastIO(); solve();
}
