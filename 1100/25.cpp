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
    string s;   cin>>s;
    int n=s.size();
    set<char>c;
    int k;
    for(k=0;k<n;k++){
        if(c.find(s[k])==c.end())
            c.insert(s[k]);
        else break;
    }

    for(int i=k;i<n;i++){
        if(s[i]!=s[i-k]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}