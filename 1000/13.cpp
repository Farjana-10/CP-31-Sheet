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
    ll n,k,b,s; cin>>n>>k>>b>>s;
    ll lo=k*b, hi=b*k+n*(k-1);
    if(lo>s or s>hi){
        cout<<-1<<endl;
        return;
    }
    vector<ll>v(n,0);
    s-=b*k;
    v[0]=lo;
    
    for(int i=0;i<n;i++){
        ll add=min(k-1,s);
        v[i]+=add;
        s-=add;
    }
    
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
}

int main() {
    Faster;
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}