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
    int n,m;    cin>>n>>m;
    vector<int>v(n);
    map<int, int>mp;
    for(auto &i:v)  cin>>i;
    for(auto i:v){
        mp[i%m]++;
    }
    int ans=0;
    if(mp[0])   ans++;
    for(int i=1;i<m;i++){
        if(mp[i]>0){
            int x=abs(mp[i]-mp[m-i]);
            if(x<=1)    ans++;
            else ans+=x;
            mp[m-i]=0;
        }
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