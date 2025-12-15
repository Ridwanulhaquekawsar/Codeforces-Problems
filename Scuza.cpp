#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#define out(x) cout << (x) << nl
#define in cin >>

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"

#define f first
#define s second
#define pb push_back

#define rs(v, n) (v).resize(n)
#define as(v, n) (v).assign(n, 0)

#define pll pair<ll, ll>
#define vll vector<ll>

#define st set<ll>
#define ml multiset<ll>

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rrep(i, n) for(ll i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for(ll i = a; i <= b; i++)
#define rrep1(i, b, a) for(ll i = b; i >= a; i--)

/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/

ll t;
ll n, q;
vll prf_max;
vll prf_sum;
vll v;
ll key;

void solve(){
    in n >> q;
    rs(v, n);
    rs(prf_max, n);
    rs(prf_sum, n);
    
    in v[0];
    prf_sum[0] = v[0];
    prf_max[0] = v[0];
    
    rep1(i, 1, n - 1){
    
        in v[i];
        prf_sum[i] = prf_sum[i - 1] + v[i];
        prf_max[i] = max(prf_max[i - 1], v[i]);
    }
    
    rep(i, q){
        
        in key;
        
        auto it = upper_bound(all(prf_max), key);
        
        if(it == begin(prf_max)){
            cout << 0 << " ";
            continue;
        }
        
        it--;
        
        cout << prf_sum[it - prf_max.begin()] << " ";
    }
    
    cout << nl;
}

int main(){
    FastIO(); 
    
    t = 1;
    in t;
    while(t--) solve();
}



2nd Approach: 👇


#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#define out(x) cout << (x) << nl
#define in cin >>

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"

#define f first
#define s second
#define pb push_back

#define pll pair<ll, ll>
#define vll vector<ll>

#define st set<ll>
#define ml multiset<ll>

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rrep(i, n) for(ll i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for(ll i = a; i <= b; i++)
#define rrep1(i, b, a) for(ll i = b; i >= a; i--)

/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/

ll t;
ll n, q;
vector<ll>ans;
vector<pll>que;
vector<ll>v;
vector<ll>prf_sum;
ll j;

void solve(){
    in n >> q;
    prf_sum.resize(n + 1);
    que.resize(q);
    v.resize(n + 1);
    ans.resize(q);
    
    in v[1];
    prf_sum[1] = v[1];
    
    rep1(i, 2, n){
    
        in v[i];
        prf_sum[i] = prf_sum[i - 1] + v[i];
    }
    
    rep(i, q){
    
        in que[i].first;
        que[i].second = i;
    }
    
    sort(all(que));
    
    j = 0;
    
    rep(i, q){
    
        while(1){
        
            if(j == n || v[j + 1] > que[i].first) break;
            j++;
        }
        
        ans[que[i].second] = prf_sum[j];
    }
    
    rep(i, q) cout << ans[i] << " ";
    cout << nl;
}

int main(){
    FastIO(); 
    
    t = 1;
    in t;
    while(t--) solve();
}
