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
    string s;   cin>>s;
    bool flag=0;
    vector<bool>v(26,0);
    int x;
    for( int i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
            x=i+1;
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
        cout<<x<<" "<<x+1<<endl;
    }
    else
    cout<<"NO"<<endl;
}

int main() {
    Faster;
    // int t;
    // cin >> t;
    // while (t--)
        solve();

    return 0;
}