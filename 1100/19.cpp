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
    ll sum=0, cntNeg=0, neg=1e9, isZero=0;
    for(int i=0;i<n;i++){
        ll x;  cin>>x;
        if(x==0) isZero=1;
        if(x<0) {
            x*=-1;
            cntNeg++;
        }
        sum+=x;
        neg=min(neg,x);
    }
    ll ans=0;
    if(cntNeg%2==0)    ans=sum;
    else{
        if(isZero==1)   ans=sum;
        else ans=sum-(2*neg);
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