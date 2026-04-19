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
    ll n;  cin>>n;
    ll mn1=LLONG_MAX,  mn2=LLONG_MAX;
    
    vector<ll>v[n];
    
    for(int i=0;i<n;i++){
        int m;  cin>>m;
        for(int j=0;j<m;j++){
            ll x;   cin>>x;
            v[i].push_back(x);
        }
    }

    for(int i=0;i<n;i++)
        sort(all(v[i]));
    for(int i=0;i<n;i++){
        mn2=min(v[i][1],mn2);
        mn1=min(v[i][0],mn1);
    }
    ll ans=0, cnt=0;
    for(int i=0;i<n;i++){
        if(v[i][1]==mn2 and cnt==0) cnt++;
        else ans+=v[i][1];
    }
    ans+=mn1;
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