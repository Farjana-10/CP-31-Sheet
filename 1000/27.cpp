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
    for(ll i=n;;i++){
        ll tmp=i;
        bool flag=1;
        while(tmp){
            ll mod = tmp%10;
            if(mod!=0 && i%mod!=0){
                flag=0;
                break;
            }
            tmp/=10;
        }
        if(flag){
            cout<<i<<endl;
            return;
        }
    }
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}