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
    vector<pii>v;
    
    for(int i=0; i<n; i++){
        int x;  cin>>x;
        v.push_back({x,i});
    }
    
    sort(v.rbegin(), v.rend());
    
    vector<int>pos(n);
    ll val=1, ans=0;
    for(int i=0; i<n; i++){
        if(i%2==0){
            pos[v[i].second]=val;
            ans += val * v[i].first;
        }
        else{
            pos[v[i].second]=-val;
            ans += val * v[i].first;
            val++;
        }
    }
    
    cout<<2*ans<<endl;
    cout<<0<<" "; 
    for(int i=0; i<n; i++){
        cout<<pos[i]<<" ";
    }
    cout<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}