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

void solve() {
    ll n,k;    cin>>n>>k;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    
    ll op=n-k+1, val=0, sum=0;
    int l=0, r=k;
    for(int i=l;i<r;i++){
        val+=v[i];
    }
    sum+=val;
    while(r<n){
        val-=v[l];
        val+=v[r];
        l++, r++;
        sum+=val;
    }
    cout<<fixed<<setprecision(10) << (double)sum/op<<endl;
}

int main() {
    Faster;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}