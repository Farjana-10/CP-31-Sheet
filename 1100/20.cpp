#include <bits/stdc++.h>
using namespace std;

#define Faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) x.begin(), x.end()
#define endl '\n'

void solve() {
    int n;  cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)  cin>>v[i];
    for(int i=1;i<n;i++)  v[i]+=v[i-1];

    ll ans=-1;
    for(int i=0;i<n-1;i++){
        ll val=v[n-1]-v[i];
        ans=max(ans, __gcd(v[i], val));
    }
    cout<<ans<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}