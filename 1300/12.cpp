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
    int n,k;  cin>>n>>k;
    vector<string>bset(n);
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        bitset<31>temp(x);
        bset[i]=temp.to_string();
    }
    ll ans=0;
    for(int i=0;i<31;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            string tmp= bset[j];
            if(tmp[i]=='0')
                cnt++;
        }
        if(cnt<=k){
            k-=cnt;
            ans+=(1LL<<(30-i));
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