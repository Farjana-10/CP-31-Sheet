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
    ll n;   cin>>n;
    char c; cin>>c;
    string s;   cin>>s;
    s+=s;
    if(c=='g'){
        cout<<0<<endl;
        return;
    }
    ll ans=0, idx=2*n-1;
    for(ll i=2*n-1;i>=0;i--){
        if(s[i]=='g'){
            idx=i;
        }
        if(s[i]==c){
            ans=max(ans, idx-i);
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