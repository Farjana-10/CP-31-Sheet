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
    int n,k;    cin>>n>>k;
    vector<int>v(n);
    map<int, bool>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]=1;
    }
    
    for(int i=0;i<n;i++){
        if(mp.find(v[i]-k)!=mp.end()){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}