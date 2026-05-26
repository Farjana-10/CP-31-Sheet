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
    vector<int>v(n),bits(30,0);
    for(int i=0;i<n;i++)    cin>>v[i];
    
    for(int i=0;i<30;i++){
        ll val=1LL<<i;
        for(int j=0;j<n;j++){
            if((v[j]&val)!=0)
                bits[i]++;
        }
    }

    for(int k=1;k<=n;k++){
        bool flag=1;
        for(int j=0;j<30;j++){
            if(bits[j]%k!=0){
                flag=0;
                break;
            }
        }
        if(flag)    cout<<k<<" ";
    }
    cout<<endl;
}

int main() {
    Faster;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}