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
    int n,k;    cin>>n>>k;
    int x, cntE=0, cntO=0, ans=INT_MAX;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>x;
        arr[i]=x;
        if(x%2==0)  cntE++;
        else cntO++;
    }
        
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            ans=0;
            break;
        }
        else{
            int s=k-(arr[i]%k);
            if(s==k) ans=0;
            else ans=min(ans, s);
        }
    }
    if(k==4){
        if(cntE>=2) ans=min(ans,0);
        else if(cntE==1) ans=min(ans,1);
        else ans=min(ans,2);
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