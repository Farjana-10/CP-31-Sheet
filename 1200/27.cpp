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
    int n;  cin>>n;
    string s1,s2;   cin>>s1>>s2;
    if(s1==s2){
        cout<<"YES"<<endl;
        return;
    }
    int cnt=0, cnt1=0, cnt0=0;
    for(int i=0;i<n;i++){
        if(s1[i]=='1')  cnt1++;
        else cnt0++;
    }
    bool flag=1;
    for(int i=n-1;i>=0;i--){
        char ch;
        if(cnt%2==0){
            ch=s1[i];
        }
        else{
            (s1[i]=='0')?ch='1':ch='0';
        }
        if(ch==s2[i]){
            (ch=='0')?cnt0--:cnt1--;
        }
        else{
            if(cnt0==cnt1){
                ch=s2[i];
                (ch=='0')?cnt0--:cnt1--;
                cnt++;
            }
            else {
                flag=0;
                break;
            }
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main() {
    Faster;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}