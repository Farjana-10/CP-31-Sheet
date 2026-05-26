#include <bits/stdc++.h>
using namespace std;

#pragma region Macros
#define Faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define m1 cout << -1 << endl
#pragma endregion

#pragma region Math
const ll MOD = 1e9 + 7;
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
#pragma endregion

// const ll N=1e9+12;
// vector<ll>v(N,0);

ll preSum(ll i){
    return i*(i+1)/2;
}

void solve() {
    ll  n,x;    cin>>n>>x;
    ll last_val=n*n, k=2*n-1;

    ll l=1, r=k, mid=0, ans=0, val=0;
    if(last_val<=x){
        cout<<k<<endl;
        return;
    }
    while(l<=r){
        mid=l+(r-l)/2;
        if(mid<=n)  val=preSum(mid);
        else{
            val=last_val-preSum(k-mid);
        }
        if(val>=x){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
}

int main() {
    Faster;
    int t = 1;
    cin >> t;
    // preSum();
    while (t--) solve();
    return 0;
}