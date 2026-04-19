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
    int a,b;    cin>>a>>b;
    int ans=109;
    for(int i=0; i<=31; i++){
        int na= a, nb = b+i;
        if(nb==1)   continue;
        int ops=i;
        while(na>0){
            na/=nb;
            ops++;
        }
        ans = min(ans, ops);
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