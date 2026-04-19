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
    vector<ll>a(n), b(n);
    for(auto &i:a)  cin>>i;
    for(auto &i:b)  cin>>i;

    vector<ll>v(n);
    for(int i=0;i<n;i++){
        v[i]=b[i]-a[i];
    }

    sort(all(v));
    int l=0, r=n-1;
    ll ans=0;
    while(l<r){
        if(abs(v[l])<=v[r]){
            ans++;
            l++, r--;
        }
        else l++;
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