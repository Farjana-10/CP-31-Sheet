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
    vector<int>a(n), b(n);
    for(auto &x:a)  cin>>x;
    for(auto &x:b)  cin>>x;
    int l=0, r=n-1;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]!=b[i]){
            r=i;
            break;
        }
    }
    for(int i=l;i>0;i--){
        if(b[i]>=b[i-1])
            l--;
        else break;
    }
    for(int i=r;i<n-1;i++){
        if(b[i]<=b[i+1])
            r++;
        else break;
    }

    cout<<l+1<<" "<<r+1<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}