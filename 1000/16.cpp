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
    int n,r,b;  cin>>n>>r>>b;  
    int p=b+1;  
    int si=r/p;
    int rem=r%p;

    string s;
    for(int i=0;i<si;i++)
        s+='R'; 

    string ans;
    for(int i=0;i<p;i++){ 
        ans+=s;   
        if(rem>0){
            ans+='R';
            rem--;
        }         
        if(i<b) 
            ans+='B';           
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