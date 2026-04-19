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
    if(a.second!=b.second)
        return a.second<b.second;
    return a.first>b.first;
}

void solve() {
    ll n,p;    cin>>n>>p;
    vector<pll>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i].second;
    }
    for(int i=0;i<n;i++){
        cin>>v[i].first;
    }
    sort(all(v));
    ll ans=p, i=1;
    
    for(auto x:v){
        ll  cost=x.first;
        ll  share=x.second;
        if(cost>=p) break;
        if(i+share>n){
            ans+=(n-i)*cost;
            i=n;
            break;
        }
        else{
            ans+=share*cost;
            i+=share;
        }
    }
    ans+=(n-i)*p;
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