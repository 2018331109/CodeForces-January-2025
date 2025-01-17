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
    int n, m;
    cin>>n>>m;
    int cur_x, next_x, cur_y, next_y;
    cin>>cur_x>>cur_y;
    next_x=cur_x+m, next_y=cur_y+m;
    int ans=(m*4)*n;
    for(int i=1;i<n;i++){
        int x, y; cin>>x>>y;
        cur_x+=x, cur_y+=y;
        ans-=(abs(next_x-cur_x)*2)+(abs(next_y-cur_y)*2);
        next_x=cur_x+m, next_y=cur_y+m;
    }
    cout<<ans<<endl;
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

