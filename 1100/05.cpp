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
    vector<ll>v(n+1);
    v[0]=0;
    for(int i=1;i<=n;i++){
        int x;  cin>>x;
        v[i]=x;
        v[i]+=v[i-1];
    }

    ll ans=0;
    for(int k=1; k<=n/2; k++){
        if(n%k==0){
            ll mxV=LLONG_MIN, mnV=LLONG_MAX;
            for(int j=k; j<=n; j+=k){
                ll val = v[j]-v[j-k];
                mxV=max(mxV, val);
                mnV=min(mnV, val);
            }
            ll diff=mxV-mnV;
            ans=max(ans, diff);
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