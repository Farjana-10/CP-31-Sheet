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
    int n,l,r;  cin>>n>>l>>r;
    vector<int>ans;
    ans.push_back(l);
    int cnt=1;
    for(int i=2;i<=n;i++){
        if(l%i==0) {
            ans.push_back(l); 
            cnt++;
        }
        else{
            int j=l/i;
            j=(j+1)*i;
            if(j<=r) {
                ans.push_back(j);
                cnt++;
            }
            else break;
        }
    }

    if(cnt==n) {
        cout<<"YES"<<endl;
        for(auto x:ans)
            cout<<x<<" ";
        cout<<endl;
    }  
    else cout<<"NO"<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}