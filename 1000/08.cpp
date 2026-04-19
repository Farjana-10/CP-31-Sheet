#include <bits/stdc++.h>
using namespace std;

#define Faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) x.begin(), x.end()
#define endl '\n'

bool cmp(pll a, pll b){
    if(a.first==b.first)
        return a.second<b.second;
    return a.first>b.first;
}

void solve() {
    ll n;   cin>>n;
    vector<ll>a(n), b(n);
    map<ll,ll>mp1,mp2;
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(int i=0;i<n;i++)
        cin>>b[i];
    ll cnt=0;
    mp1[a[0]]++, mp2[b[0]]++;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }
        else{
            mp1[a[i]]=max(mp1[a[i]], cnt+1);
            cnt=0;
        }  
    }
    mp1[a[n-1]]=max(mp1[a[n-1]], cnt+1);
    cnt=0;
    for(int i=0;i<n-1;i++){
        if(b[i]==b[i+1]){
            cnt++;
        }
        else{
            mp2[b[i]]=max(mp2[b[i]], cnt+1);
            cnt=0;
        }  
    }
    mp2[b[n-1]]=max(mp2[b[n-1]], cnt+1);
    // for(auto x:mp1){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    // cout<<endl;
    // for(auto x:mp2){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    // cout<<endl;
    ll ans=LLONG_MIN;
    for(auto x:mp1){
        ll val=x.first;
        ans=max(ans,mp1[val]+mp2[val]);
    }
    // cout<<endl;
    for(auto x:mp2){
        ll val=x.first;
        ans=max(ans,mp1[val]+mp2[val]);
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