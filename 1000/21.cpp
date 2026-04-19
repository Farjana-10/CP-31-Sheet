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
    string a,b; cin>>a>>b;
    int x=a.size(), y= b.size();
    int res=0;
    for(int i=0;i<x;i++){
        for(int j=0; j<y; j++){
            int len=0;
            while(i+len<x && j+len<y && a[i+len]==b[j+len]){
                len++;
            }
            res = max(res, len);
        }
    }
    cout<<(x-res)+(y-res)<<endl;
}


int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}