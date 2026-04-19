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
    int n,c;  cin>>n>>c;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        ll x;  cin>>x;
        v[i]=x+i+1;
    }
    sort(all(v));
    ll sum=0, ans=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(sum<=c)  ans++;
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