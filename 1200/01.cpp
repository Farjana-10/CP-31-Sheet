#include <bits/stdc++.h>
using namespace std;

#define Faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define endl '\n'

void solve() {
    int n;  cin>>n;
    vector<pll>a(n), b(n), c(n);
    for(ll i=0;i<n;i++) {
        ll x;  cin>>x;
        a[i]={x,i};
    }
    for(ll i=0;i<n;i++) {
        ll x;  cin>>x;
        b[i]={x,i};
    }
    for(ll i=0;i<n;i++) {
        ll x;  cin>>x;
        c[i]={x,i};
    }
    sort(rall(a));
    sort(rall(b));
    sort(rall(c));
    ll ans=0;
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
            for(ll k=0;k<3;k++){
                if((a[i].second != b[j].second) && (a[i].second != c[k].second) && (b[j].second != c[k].second)){
                    ll sum=a[i].first+b[j].first+c[k].first;
                    ans=max(ans, sum);
                }
            }
        }
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