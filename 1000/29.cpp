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
    ll a,b;    cin>>a>>b;
    ll x=0, y=0, ans=0;
    if(a==b) cout<<0<<endl;
    else if(a<b){
        x=a;
        while(x*8<=b)   x*=8, ans++;
        while(x*4<=b)   x*=4, ans++;
        while(x*2<=b)   x*=2, ans++;
        if(x==b)
        cout<<ans<<endl;
        else 
        cout<<-1<<endl;
    }
    else{
        x=a;
        while(x%8==0 && x/8>=b)   x/=8, ans++;
        while(x%4==0 && x/4>=b)   x/=4, ans++;
        while(x%2==0 && x/2>=b)   x/=2, ans++;
    
        if(x==b)
        cout<<ans<<endl;
        else 
        cout<<-1<<endl;
    }
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}