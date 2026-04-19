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
    int n;  cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    ll sum= 0, ans=LLONG_MIN;
    for(int i=0;i<n;i++){
        if(sum<0 || (i!=0 && abs(v[i-1])%2 == abs(v[i])%2))
            sum=0;
        sum+=v[i];
        ans = max(ans, sum);
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