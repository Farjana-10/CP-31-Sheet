#include <bits/stdc++.h>
using namespace std;

#define Faster ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) x.begin(), x.end()
#define endl '\n'

bool check(vector<int>&v, int x){
    vector<int>tmp;
    for(int i=0;i<v.size();i++){
        if(v[i]!=x) tmp.push_back(v[i]);
    }
    int m=(int)tmp.size();
    for(int i=0;i<m;i++){
        if(tmp[i]!=tmp[m-i-1]) return 0;
    }
    return 1;
}

void solve() {
    int n;  cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    for(int i=0;i<n;i++){
        if(v[i]!=v[n-i-1]){
            if(check(v, v[i]) || check(v, v[n-i-1])){
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
            return;
        }
    }
    
    cout<<"YES"<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}