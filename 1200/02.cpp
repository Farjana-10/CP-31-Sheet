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
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    for(ll k=1;k<=60;k++){
        ll val = 1LL<<k;
        set<ll>s;
        for(int i=0;i<n;i++){
            s.insert(v[i]%val);
        }
        if(s.size()==2){
            cout<<val<<endl;
            return;
        }
    }
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}