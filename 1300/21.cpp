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
    int n;  cin>>n;
    vector<int>v(n), ans;
    for(auto &it:v)
        cin>>it;

    ans.push_back(v[0]);
    
    for(int i=1;i<n-1;i++){
        if((1LL*(v[i]-v[i-1])*(v[i+1]-v[i]))<0)
            ans.push_back(v[i]);
    }
    
    ans.push_back(v[n-1]);

    cout<<ans.size()<<endl;
    for(auto x:ans)
        cout<<x<<" ";
    cout<<endl;
}

int main() {
    Faster;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}