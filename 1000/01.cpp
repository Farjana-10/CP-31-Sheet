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
    string s;   cin>>s;
    int n=s.size(), cnt0=0, cnt1=0, ans=0;
    
    if(n==1){
        cout<<1<<endl;
        return;
    }

    for(int i=0;i<n;i++){
        if(s[i]=='0') cnt0++;
        else cnt1++;
    }

    if(cnt0==cnt1){
        cout<<0<<endl;
        return;
    }

    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(cnt1>0){
                cnt1--;
            }
            else{
                ans=n-i;
                break;
            }
        }
        else{
            if(cnt0>0){
                cnt0--;
            }
            else{
                ans=n-i;
                break;
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    Faster;
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}