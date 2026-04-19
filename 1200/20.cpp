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
    int n;  cin>>n;
    string s;   cin>>s;
    string ss=s;
    reverse(all(ss));
    if(s==ss){
        cout<<0<<endl;
        return;
    }
    int ans=INT_MAX;
    for(int i=0;i<26;i++){
        char ch=char(i+97);
        // cout<<ch<<endl;
        int l=0, r=n-1, cnt=0;
        while(l<r){
            // cout<<s[l]<<" "<<s[r]<<endl;
            if(s[l]==s[r])  l++, r--;
            else if(s[l]==ch and s[r]!=ch){
                cnt++;
                l++;
            }
            else if(s[l]!=ch and s[r]==ch){
                cnt++;
                r--;
            }
            else break;
        }
        if(cnt!=0 && l>=r)
            ans=min(ans,cnt);
    }
    if(ans!=INT_MAX)    cout<<ans<<endl;
    else cout<<-1<<endl;
}

int main() {
    Faster;
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}