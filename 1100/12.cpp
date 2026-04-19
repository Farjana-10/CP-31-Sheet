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
    int n; cin>>n;
    vector<ll>a(n), b(n);
    for(auto &x:a)  cin>>x;
    for(auto &x:b)  cin>>x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans=1, mod=1e9+7;
    for(int i=0;i<n;i++){
        if(a[i]<=b[i]){
            ans=0;
            break;
        }
    }
    if(!ans){
        cout<<0<<endl;
        return;
    }
    
    for(int i=0;i<n;i++){
        int l=i, h=n-1, idx;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(a[i]>b[mid]){
                idx=mid;
                l=mid+1;
            }
            else h=mid-1;
        }
        ans*=(idx-i+1);
        ans%=mod;
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