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
    int a=0, m=0, b=0, c=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            if(i!=n/i){
                a=i;
                m=n/i;
                break;
            }
        }
    }
    if(a==0){
        no;
        return;
    }
    for(int i=a+1;i*i<=m;i++){
        if(m%i==0){
            if(i!=m/i){
                b=i;
                c=m/i;
            }
        }
    }
    if(b==0){
        no;
        return;
    }
    yes;
    cout<<a<<" "<<b<<" "<<c<<endl;
}

int main() {
    Faster;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}