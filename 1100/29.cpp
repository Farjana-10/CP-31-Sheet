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
    int n;    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    ll evenGcd=v[0], oddGcd=v[1];
    for(int i=2;i<n;i++){
        if(i%2==0)  evenGcd=__gcd(evenGcd, v[i]);
        else  oddGcd=__gcd(oddGcd, v[i]);
    }

    bool flag=0;
    for(int i=1;i<n;i+=2){
        if(v[i]%evenGcd==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<evenGcd<<endl;
        return;
    }
    
    flag=0;
    for(int i=0;i<n;i+=2){
        if(v[i]%oddGcd==0){
            flag=1;
            break;
            }
        }
        if(flag==0){
            cout<<oddGcd<<endl;
        }
        else
            cout<<0<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}