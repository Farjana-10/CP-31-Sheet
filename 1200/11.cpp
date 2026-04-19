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
    ll n;   cin>>n;
    string s;   cin>>s;
    vector<ll>v(n+1), marked(n+1,1);
    for(ll i=1;i<=n;i++){
        v[i]=s[i-1]-'0';
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        if(v[i]==0){
            for(ll j=i;j<=n;j+=i){
                if(v[j]==1) break;
                if(marked[j]==0)    continue;
                marked[j]=0;
                ans+=i;
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