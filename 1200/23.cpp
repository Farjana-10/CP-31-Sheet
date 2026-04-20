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

vector<string>v;
void str(){
    for(char i='a';i<='z';i++){
        string s="";
        s+=i;
        v.push_back(s);
    }
    for(char i='a';i<='z';i++){
        for(char j='a';j<='z';j++){
            string s="";
            s+=i;
            s+=j;
            v.push_back(s);
        }
    }
    for(char i='a';i<='z';i++){
        for(char j='a';j<='z';j++){
            for(char k='a';k<='z';k++){
                string s="";
                s+=i;
                s+=j;
                s+=k;
                v.push_back(s);
            }
        }
    }
}

void solve() {
    int n;  cin>>n;
    string s;   cin>>s;
    for(int i=0;i<v.size();i++){
        if(s.find(v[i])==string::npos){
            cout<<v[i]<<endl;
            break;
        }
    }
}

int main() {
    Faster;
    str();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}