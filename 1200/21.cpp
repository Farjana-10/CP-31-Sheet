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
    vector<pll>v;
    for(ll i=1;i<=n;i++){
        ll x;  cin>>x;
        v.push_back({x,i});
    }
    sort(all(v));
    int cnt=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            ll x=v[i].first, y=v[j].first;
            ll a=v[i].second, b=v[j].second;
            if((x*y)>2*n)   break;
            if((x*y)==(a+b))    cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}