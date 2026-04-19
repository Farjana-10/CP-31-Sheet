#include <bits/stdc++.h>
using namespace std;

#define Faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) x.begin(), x.end()
#define endl '\n'

const int N= 3e5 + 5;
int v[N];

int fun(int n){
    int val=0;
    if(n%4==0) val=n;
    else if(n%4==1) val=1;
    else if(n%4==2) val=n+1;
    else val=0;

    return val;
}

void solve() {
    int a,b;    cin>>a>>b;

    int val = fun(a-1);

    if(val==b)  cout<<a<<endl;
    else if((val^b)!=a) cout<<a+1<<endl;
    else cout<<a+2<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    // fun();
    while (t--)
        solve();

    return 0;
}