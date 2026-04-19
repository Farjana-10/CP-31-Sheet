#include <bits/stdc++.h>
using namespace std;

#define Faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define endl '\n'


void solve() {
    int n,s;   cin>>n>>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        if(x==1)    v.push_back(i+1);
    }  

    int m=v.size();
    if(m<s){
        cout<<-1<<endl;
        return;
    }
    int ans=INT_MAX;
    for(int i=0;i<=m-s;i++){
        int l,r;
        (i==0)?l=0:l=v[i-1];
        ((i+s-1)==(m-1))?r=0:r=n-v[i+s]+1;
        ans=min(ans, l+r);
    }
    cout<<ans<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}