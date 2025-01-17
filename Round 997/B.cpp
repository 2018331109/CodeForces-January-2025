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
    int n;
    cin >> n;

    vector<int> cnt(n+1, 0);
    vector<string> v(n);

    // Read the adjacency matrix and count degrees
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        for (int j = 0; j < n; j++) {
            if (v[i][j] == '1') {
                cnt[i+1]++;
                cnt[j+1]++;
            }
        }
    }
    for(int i=1;i<=n;i++) cnt[i]/=2;
//    for(int i=1;i<=n;i++) cout<<cnt[i]<<" ";
//    cout<<endl;
    vector<int>ans(n+1, 0);
    for(int i=1;i<=n;i++){
        int remain=cnt[i];
        for(int j=0;j<i;j++){
            if(v[i-1][j]=='1') remain--;
        }
        int k=n;
        while(remain>0 or ans[k]){
            if(ans[k]==0) k--, remain--;
            else k--;
        }
        ans[k]=i;

    }

    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}

