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
    ll n;   cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n/2;i++){
        for(int j=i;j<=(n-i-2);j++){
            int one=0, zero=0;
            if(a[i][j]=='1')
                one++;
            else zero++;
            if(a[j][n-i-1]=='1')
                one++;
            else zero++;
            if(a[n-i-1][n-1-j]=='1')
                one++;
            else zero++;
            if(a[n-1-j][i]=='1')
                one++;
            else zero++;
            ans+=min(one,zero);
        }
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