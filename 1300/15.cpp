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

bool isEqual(vector<int>&v, int n){
    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1])
            return 0;
    }
    return 1;
}

void solve() {
    int n;  cin>>n;
    vector<pii>v;
    for(int i=0;i<n;i++){
        int c;  cin>>c;
        int mx=0;
        for(int j=0; j<c; j++){
            int x;	cin>>x;
            // x-=j;
            mx=max(mx, (x-j+1));
        }
        v.push_back({mx, c});
    }
    sort(all(v));

    int ans=v[0].first, cnt=v[0].second;
    for(int i=1;i<n;i++){
        ans=max(ans, v[i].first-cnt);
        cnt+=v[i].second;
    }
    cout<<ans<<endl;
}

int main() {
    Faster;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}