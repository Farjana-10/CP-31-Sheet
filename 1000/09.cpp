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
    ll n;   cin>>n;
    ll l=1, r=n-1;
    ll ansL=l, ansR=r;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            ansL=n/i;
            ansR=n-ansL;
            break;
        }
    }
    cout<<ansL<<" "<<ansR<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}