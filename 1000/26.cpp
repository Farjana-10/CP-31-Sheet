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
    ll x,y,k;  cin>>x>>y>>k;
    ll trade = k;

    ll n =(k+k*y-1)/(x-1);
    if((k+k*y-1)%(x-1)!=0)
        n++;
    trade+=n;
    cout<<trade<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}