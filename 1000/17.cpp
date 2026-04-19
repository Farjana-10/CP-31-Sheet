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
    int k = 0;
    
    while((1<<(k+1)) < n) k++;

    for(int i=(1<<k)-1; i>=0; i--)
        cout<<i<<" ";

    for(int i=(1<<k); i<n; i++)
        cout<<i<<" ";

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