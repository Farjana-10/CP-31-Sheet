#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<long, long>

int main(){
    Faster;
    int t; cin >> t;
    while(t--){
        int n;  cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int a=0, b=0, ans=0, cnt=0;
        int l=0, r=n-1;

        while(l<=r){
            if(a<=b){
                a+=v[l];
                l++;
            }
            else{
                b+=v[r];
                r--;
            }
            cnt++;
            if(a==b) ans=cnt;
        }
        cout<<ans<<endl;
    }
    return 0;
}