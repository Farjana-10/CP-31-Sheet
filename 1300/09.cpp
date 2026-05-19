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
    vector<int>v[n];
    map<int, int>mp;
    for(int i=0;i<n;i++){
        int c;  cin>>c;
        for(int j=0;j<c;j++){
            int x;  cin>>x;
            v[i].push_back(x);
            mp[x]++;
        }
    }
    bool isPossiable=0;
    for(int i=0;i<n;i++){
        bool flag=1;
        for(int j=0;j<v[i].size();j++){
            if(mp[v[i][j]]<2){
                flag=0;
                break;
            }
        }
        if(flag==1){
            isPossiable=1;
            break;
        }
    }
    if(isPossiable==1) yes;
    else no;
}

int main() {
    Faster;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}