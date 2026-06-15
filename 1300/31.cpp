#include <bits/stdc++.h>
using namespace std;

#pragma region Macros
#define Faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define m1 cout << -1 << endl
#pragma endregion

#pragma region Math
const ll MOD = 1e9 + 7;
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
#pragma endregion

void solve() {
    string s, ans;   cin>>s;

    int n=s.size();
    if(n==1) {
        cout<<s<<endl;
        return;
    }
    
    ans+=s[0];
    for(int i=1;i<n-1;i++){
        if(s[i]==ans[i-1]){
            for(char c='a'; c<='z'; c++){
                if(ans[i-1]!=c and c!=s[i+1]){
                    ans+=c;
                    break;
                }
            }
        }
        else ans+=s[i];
    }
    if(ans[n-2]==s[n-1]){
        for(char c='a'; c<='z'; c++){
                if(ans[n-2]!=c){
                    ans+=c;
                    break;
                }
            }
    }
    else
        ans+=s[n-1];
    cout<<ans<<endl;
}

int main() {
    Faster;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}