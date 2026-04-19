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
    int n,q;    cin>>n>>q;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    int l=1e9;
    for(int i=0;i<q;i++){
        int x; cin>>x;
        if(l>x){
            l=x;
            for(int j=0;j<n;j++){
                if(v[j]%(1<<x)==0)
                    v[j]+=(1<<(x-1));
            }
        }
    }

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