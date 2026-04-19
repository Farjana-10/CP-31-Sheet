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
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
        
    sort(v.rbegin(), v.rend());
        
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
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