/*
Sunday , 25 January , 2026 !

☑ 4th problem of the day done ! ╰┈➤ (Codeforces Round 1076 (Div 3) )

• Problem No. D (Monster Game) ! 

• Problem Link : ⤵︎
https://codeforces.com/contest/2193/problem/D

Observation & Approach : 🕵🏻‍♂️ & 🎯

- We'll take all unique element then check how many val(strength of swords in first array a) greater or equal than this unique val(considers this as a current complexity).  This val will indicates that how many swords has the ability to kills a moster ! 

- After that we will use this swords number to for every unique number complexity(from set) to pass the level of array b. 

- Now, We'll calculate the prefix of b to see that, using this swords number how many level we can pass, as b[i] indicating the level then using this prefix sum we want to pass level by level throught indexing, se here we can use binary search concept lower_bound / upper_bound to see using this swords in which indexed level we reach !  

- And then We we'll calculate the score  mx = max(mx, (complexity * level already we passed) ) ;

Time Complexity : 🧠🧮𒅒🤔 O(nlogn) ! 

Implementation Uses : </> 👨🏻‍💻 Search, Pefix sum, set ! 
*/




Code : 👇

#include<bits/stdc++.h>
using namespace std;
#define FastIO() ios::sync_with_stdio(0),cin.tie(0)
using ll = long long int;
#define nl '\n'

#define out(x) cout << (x) << nl
#define in cin >>

#define pinf LLONG_MAX
#define ninf LLONG_MIN

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"

#define f first
#define sc second
#define fr front()
#define bc back()
#define bg begin()
#define ed end()
#define pu push
#define po pop
#define pf push_front
#define pb push_back
#define pob pop_back()
#define pof pop_front()
#define emp emplace
#define clr clear()
#define wh while
#define emp_fr emplace_front
#define emp_bc emplace_back
#define mn_ele min_element
#define sz(x) (ll)x.size()

#define rs(v, n) (v).resize(n)
#define as(v, sz, val) (v).assign(sz, val)

#define pll pair<ll, ll>
#define vll vector<ll>
#define vvll vector< vector<ll> >
#define vpll vector<pll>
#define S string

#define St set<ll>
#define Ms multiset<ll>
#define Mp map<ll, ll>
#define Ump unordered_map<ll, ll>
#define Q queue<ll>
#define Pq priority_queue<ll>
#define Dq deque<ll>

#define rep(i, n) for(ll i = 0; i < n; i++)
#define rrep(i, n) for(ll i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for(ll i = a; i <= b; i++)
#define rrep1(i, b, a) for(ll i = b; i >= a; i--)

bool isPrime(ll n){

    if(n == 1) return 0;
    else if(n == 2) return 1;
    else if(n % 2 == 0) return 0;
    
    for(ll i = 3; i <= n/i; i += 2){
        if(n % i == 0) return 0;
    }
    
    return 1;
}

class cmp{
    public:
    bool operator()(){
        
    }
};

/*
ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}
*/

/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/

ll T;
ll n;
vll a, b;
St st;
ll tmp_val;
ll lvl;
ll mx;
vll prf;
ll ans;

void solve(){
    in n;
    rs(a, n);
    rs(b, n);
    st.clr;
    rs(prf, n);
    
    rep(i, n){
        in a[i];
        st.insert(a[i]);
    }
    sort(all(a) );
    
    rep(i, n) in b[i];
    
    prf[0] = b[0];
    rep1(i, 1, n - 1) prf[i] = prf[i - 1] + b[i];
    
    mx = ninf;
    
    for(auto &x : st){
        tmp_val = n - (lower_bound(all(a), x) - a.bg);
        
        auto it = upper_bound(all(prf), tmp_val);
        
        if(it != prf.bg){
            it = prev(it);
            
            lvl = (it - prf.bg) + 1;
            
            if(lvl * x > mx){
                ans = x;
                mx = lvl * x;
            }    
        }
    }
    
    out(mx);
}

int main(){
    FastIO(); 
    
    T = 1;
    in T;
    while(T--) solve();
}
