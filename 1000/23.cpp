#include <bits/stdc++.h>
using namespace std;

#define Faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) x.begin(), x.end()
#define endl '\n'

bool prime(int n){
    if(n==2) return 1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void solve() {
    int a;  cin>>a;
    int x=a+1;
    while(!prime(x)){
        x++;
    }
    int y=x+a;
    while(!prime(y)){
        y++;
    }
    cout<<(x*y)<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}