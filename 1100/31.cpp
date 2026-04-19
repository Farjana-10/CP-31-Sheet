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
    int n,q;  cin>>n>>q;
    vector<int>v(n);
    map<int, int>mp;
    for(int i=1;i<=n;i++) {
        int x;  cin>>x;
        if(mp[x]==0)
            mp[x]=i;
    }
    
    while(q--){
        int t;  cin>>t;
        cout<<mp[t]<<" ";
        for(auto &x:mp){
            if(x.second<mp[t])
                x.second++;
        }
        mp[t]=1;
    }
    
}

int main() {
    Faster;
    // int t;
    // cin >> t;
    // while (t--)
        solve();

    return 0;
}