#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ff first
#define ss second
const int mod = 1e9+7;
const int N = 200005;

void solve() {
     int n; cin>>n;
     int m; cin>>m;

     vector<int>cows[n];
     for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x; cin>>x;
                cows[i].pb(x);
            }
     }
     vector<int>order(n);
     vector<pair<int, int>>v;
     int total=0;
     for(int i=0;i<n;i++){
        sort(cows[i].begin(), cows[i].end());
        v.pb({cows[i][0], i});
        total+=cows[i][0];
     }
     sort(v.begin(), v.end());
     if(total!=((n*(n+1))/2)-n){
        neg;
        return;
     }
     for(int i=0;i<n;i++) order[i]=(v[i].second);

     int last=-1;
     for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(cows[order[i]][j]<last){
                neg;
                return;
            }
            last=cows[order[i]][j];
        }
     }
     for(auto it:order) cout<<it+1<<" ";
     cout<<endl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}

