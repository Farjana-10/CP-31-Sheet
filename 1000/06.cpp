#include <bits/stdc++.h>
using namespace std;

#define Faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) x.begin(), x.end()
#define endl '\n'

bool cmp(pll a, pll b){
    if(a.first==b.first)
        return a.second<b.second;
    return a.first>b.first;
}

void solve() {
    ll n,k,q;   cin>>n>>k>>q;
    vector<ll>v;
    ll x,cnt=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<=q)    cnt++;
        else{
            if(cnt!=0){
                v.push_back(cnt);
                cnt=0;
            }
        }
    }
    if(cnt!=0)
        v.push_back(cnt);

    // for(auto x:v){}
    //     cout<<x<<" ";
    // cout<<endl;

    ll ans=0;
    for(auto x:v){
        if(x<k) continue;
        ll val=x-k+1;
        val=val*(val+1)/2;
        ans+=val;
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