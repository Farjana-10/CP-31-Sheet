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
    ll n,k;  cin>>n>>k;
    vector<ll>a(n), b(n);
    for(auto &x:a)
        cin>>x;
    for(auto &x:b)
        cin>>x;
    
    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
        b[i]=max(b[i-1], b[i]);
    }
    ll ans=0;

    for(int i=0;i<n && i<k;i++){
        ans=max(ans, a[i]+(k-i-1)*b[i]);
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