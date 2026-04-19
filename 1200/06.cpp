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
    vector<int>v(n);
    for(auto &x:v)  cin>>x;

    if(n==1){
        cout<<1<<endl;
        return;
    }

    int cnt=0, state=0;
    for(int i=1;i<n;i++){
        if(v[i-1] < v[i] and state!=1){
            cnt++;
            state=1;
        }
        else if(v[i-1] > v[i] and state!=-1){
            cnt++;
            state=-1;
        }
    }
    cout<<cnt+1<<endl;
}

int main() {
    Faster;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}