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


void solve() {
    ll n,m;   cin>>n>>m;
    vector<ll>v(m), gaps;
    for(auto &i:v)  cin>>i;
    sort(all(v));
    if(m==1)
        gaps.push_back(n-1);
    else{
        gaps.push_back((v[0]-1)+(n-v[m-1]));
        for(ll i=1;i<m;i++)
            gaps.push_back(v[i]-v[i-1]-1);
    }
    sort(rall(gaps));
    
    ll ans=m;
    for(ll i=0;i<gaps.size();i++){
        if(gaps[i]>0){
            if(gaps[i]>1) ans+=1;
            for(ll j=i+1; j<gaps.size();j++){
                ans+=min(4LL, gaps[j]);
                gaps[j]-=min(4LL, gaps[j]);
            }
        }
        else break;
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