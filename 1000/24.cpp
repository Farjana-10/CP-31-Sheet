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
    int n,m,x;    cin>>n>>m;
    int cnt=0, lowPos=100, highNeg=-100, sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x;
            if(x<0) {
                sum+=-x;
                cnt++;
                highNeg=max(highNeg, x);
            }
            else {
                sum+=x;
                lowPos=min(lowPos,x);
            } 
        }
    }
    if(cnt%2==0){
        cout<<sum<<endl;
    }
    else{
        int val = min(lowPos, -highNeg);
        cout<<sum-2*val<<endl;
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