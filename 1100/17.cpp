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
    int n,k;  cin>>n>>k;
    vector<ll>v(n*n);
    for(auto &x:v)  cin>>x;
    
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    int l=0, r=(n*n)-1, cnt=0;

    while(l<=r){
        if(v[l]!=v[r]) cnt++;
        l++, r--;
    }

    if(k<cnt)   cout<<"NO"<<endl;
    else if(n%2==1 || (k-cnt)%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}