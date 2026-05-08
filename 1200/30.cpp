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
    map<int, vector<int> >mp;
    for(int i=1;i<=n;i++){
        int x;  cin>>x;
        mp[x].push_back(i);
    }
    vector<vector<int> >v(mp.size());
    int idx=0;
    for(auto x:mp){
        v[idx]=x.second;
        idx++;
    }
    if(v.size()<2){
        no;
        return;
    }
    yes;
    for(int i=1;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[0][0]<<" "<<v[i][j]<<endl;
        }
    }
    for(int i=1;i<v[0].size();i++){
        cout<<v[1][0]<<" "<<v[0][i]<<endl;
    }
}

int main() {
    Faster;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}