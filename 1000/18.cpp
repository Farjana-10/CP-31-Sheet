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
    ll w,h;    cin>>w>>h;
    vector<ll>w1,w2,h1,h2;
    ll n,x;  
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        w1.push_back(x);
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        w2.push_back(x);
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        h1.push_back(x);
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        h2.push_back(x);
    }

    ll maxW1 = *max_element(all(w1));
    ll minW1 = *min_element(all(w1));

    ll maxW2 = *max_element(all(w2));
    ll minW2 = *min_element(all(w2));

    ll maxH1 = *max_element(all(h1));
    ll minH1 = *min_element(all(h1));

    ll maxH2 = *max_element(all(h2));
    ll minH2 = *min_element(all(h2));

    ll ans=0, value =0;
    value= (maxW1 - minW1)*h;
    ans= max(ans, value);
    value= (maxW2 - minW2)*h;
    ans= max(ans, value);
    value= (maxH1 - minH1)*w;
    ans= max(ans, value);
    value= (maxH2 - minH2)*w;
    ans= max(ans, value);
    
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