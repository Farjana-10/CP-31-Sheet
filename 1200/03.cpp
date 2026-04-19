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

ll lcm(ll a, ll b) {
    return (a*b)/__gcd(a,b);
}

void solve() {
    ll n,x,y;  cin>>n>>x>>y;
    ll l=lcm(x,y);

    ll cntX=n/x-n/l;
    ll cntY=n/y-n/l;

    ll sumX=cntX*(2*n-cntX+1)/2;
    ll sumY=cntY*(cntY+1)/2;
    
    cout<<sumX-sumY<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}