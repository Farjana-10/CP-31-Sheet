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
    int n,k; cin>>n>>k;
    vector<ll>v(n);
    for(auto &x:v)
        cin>>x;
    sort(v.begin(), v.end());
    for(int i=1;i<n;i++)    v[i]+=v[i-1];
    ll ans=0;
    int l1=0, l2=1, r=n-1;
    for(int i=k;i>=0;i--){
        ll m;
        if(i==0) m=0;
        else m=v[(2*i)-1];
        ll val=v[r]-m;
        ans=max(ans,val);
        r--;
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