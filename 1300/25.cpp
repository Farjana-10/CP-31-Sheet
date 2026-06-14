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
    vector<int>a(n), b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    map<int, int>mp;

    int i=0, j=0, ans=0;
    while(i<n and j<n){
        if(a[i]!=b[j]){
            if(mp[a[i]]==0){
                ans++;
                mp[b[j]]=1;
                j++;
            }
            else i++;
        }
        else i++, j++;
    }
    cout<<ans<<endl;
}

int main() {
    Faster;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}