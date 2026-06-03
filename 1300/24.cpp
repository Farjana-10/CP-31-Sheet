#include <bits/stdc++.h>
using namespace std;

#pragma region Macros
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
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

ll kadane(vector<ll> &v, int l, int r)
{
    ll curr = 0;
    ll mx = LLONG_MIN;
    for (int i = l; i <= r; i++)
    {
        curr += v[i];
        mx = max(mx, curr);
        if (curr < 0)
            curr = 0;
    }
    return mx;
}

void solve()
{
    int n;
    cin >> n;

    vector<ll> v(n);
    ll sum = 0;

    for (auto &it : v)
    {
        cin >> it;
        sum += it;
    }

    ll mx1 = kadane(v, 0, n - 2);
    ll mx2 = kadane(v, 1, n - 1);

    if (max(mx1, mx2) < sum)
        yes;
    else
        no;
}

int main()
{
    Faster;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}