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
    ll n,x;    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    sort(v.begin(), v.end());

    ll l=1, r=2e9, ans=LLONG_MIN;
    while(l<=r){
        ll mid=(l+r)/2;
        ll val=0;
        for(int i=0;i<n;i++){
            if(v[i]<=mid){
                val += mid - v[i];
            }
            else break;
        }
        if(val<=x){
            ans= mid;
            l=mid+1;
        }
        else r=mid-1;
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