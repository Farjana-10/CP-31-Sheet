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
const ll MOD = 998244353;
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
#pragma endregion

ll fec(ll n){
    if(n<2) return 1;
    return (n*fec(n-1))%MOD;
}
void solve() {
    string s;   cin>>s;

    ll c=1;
    vector<ll>v;
    for(int i=1;i<s.size();i++){
        if(s[i-1]==s[i]){
            c++;
        }
        else{
            if(c>1) v.push_back(c);
            c=1;
        }
    }
    if(c>1) v.push_back(c);
    ll f=0, val=1, ans=0;
    for(int i=0;i<v.size();i++){
        f+=v[i]-1;
        val=(v[i]*val)%MOD;
    }
    if(f==0){
        cout<<f<<" "<<1<<endl;
        return;
    }
    ll fect=fec(f);
    // val%=MOD;
    // fect%=MOD;
    ans=(fect*val)%MOD;
    cout<<f<<" "<<ans<<endl;
}

int main() {
    Faster;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
