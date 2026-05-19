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

const int N=1e6+12;
vector<bool>isprime(N,1);
vector<int>primes;

void sieve(){
    for(int i=3;i*i<N;i+=2){
        if(isprime[i]){
            for(int j=i*i;j<=N;j+=i){
                isprime[j]=0;
            }
        }
    }
    primes.push_back(2);
    for(int i=3;i<N;i+=2){
        if(isprime[i]){
            primes.push_back(i);
        }
    }
}

vector<int> primefac(int n){
    vector<int>v;
    for(auto p:primes){
        if(p*p>n) break;
        if(n%p==0){
            while(n%p==0){
                n/=p;
                v.push_back(p);
            }
        }
    }
    if(n>1) v.push_back(n);
    return v;
}

void solve() {
    int n;  cin>>n;
    map<int, int>mp;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        vector<int>v=primefac(x);
        for(auto &i:v){
            mp[i]++;
        }
    }
    for(auto x:mp){
        if(x.second%n!=0){
            no;
            return;
        }
    }
    yes;
}

int main() {
    Faster;
    int t = 1;
    cin >> t;
    sieve();
    while (t--) solve();
    return 0;
}