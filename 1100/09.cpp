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
    ll n,c; cin>>n>>c;
    vector<int>v(n);
    for(auto &x:v)
        cin>>x;
    
    ll ans=0;
    ll low=1, high=1e9;
    while(low<=high){
        ll mid=low+(high-low)/2;
        ll val= 0;
        for(auto x:v){
            val+=(2*mid+x)*(2*mid+x);
            if(val>c)   break;
        }
        // cout<<low<<" "<<high<<" "<<mid<<" "<<val<<endl;
        if(val==c){
            ans=mid;
            break;
        }
        else if(val<c)
            low=mid+1;
        else high=mid-1;
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