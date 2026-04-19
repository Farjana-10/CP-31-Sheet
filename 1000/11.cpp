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
    ll n,k;   cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(all(v));
    
    ll l=-1, r=n-1, ans=0, teamS=1;
    while(l<r){
        if(v[r]*teamS<=k)
            l++, teamS++;
        else    ans++, teamS=1, r--;
    }
    cout<<ans<<endl;
}

int main() {
    Faster;
    
        solve();

    return 0;
}