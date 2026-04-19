#include <bits/stdc++.h>
using namespace std;

#define Faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) x.begin(), x.end()
#define endl '\n'

bool cmp(pll a, pll b){
    if(a.first==b.first)
        return a.second<b.second;
    return a.first>b.first;
}

void solve() {
    ll n,k; cin>>n>>k;
    vector<ll>v(n+1,0);
    for(int i=1;i<=n;i++){
        ll x;  cin>>x;
        if(x%k==0)  v[i]=k;
        else v[i]=x%k;
    }

    vector<pll>ans;
    for(int i=1;i<=n;i++){
        ans.push_back({v[i],i});
    }

    sort(all(ans), cmp);

    for(auto x:ans){
        cout<<x.second<<" ";
    }
    cout<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}