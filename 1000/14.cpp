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
    map<int, int>mp;
    for(int i=1;i<=n;i++){
        int x;  cin>>x;
        mp[x]=i;
    }

    vector<int>v;
    v.push_back(0);
    for(auto x:mp){
        v.push_back(x.second);
    }

    for(int i=1;i<v.size();i++){
        if(v[i]-v[i-1]==1){
            cout<<-1<<endl;
            return;
        }
    }
    
    for(int i=1;i<v.size();i++){
        cout<<v[i]<<" ";
        for(int j=v[i-1]+1;j<v[i];j++){
            cout<<j<<" ";
        }
    }
    cout<<endl;
}

int main() {
    Faster;
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}