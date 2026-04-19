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

ll bs(ll val, ll idx, ll x){
    ll l=1, h=1e9;
    ll days=0;
    while(l<=h){
        ll mid=(l+h)/2;
        ll val2= val+((idx+1)*(mid-1));
        if(val2<=x){
            days=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
    return days;
}

void solve() {
    int n;  cin>>n;
    vector<ll>v(n);
    for(auto &i:v)  cin>>i;
    bool flag=1;
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i])
            flag=0;
    }
    if(flag) {
        cout<<0<<endl;
        return;
    }   
    if(v[n-2]>v[n-1] or (v[n-2]-v[n-1])>v[n-2]){
        cout<<-1<<endl;
        return;
    }
    cout<<n-2<<endl;
    for(int i=0;i<n-2;i++){
        cout<<i+1<<" "<<n-1<<" "<<n<<endl;
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