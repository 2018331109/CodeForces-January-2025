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
    vector<int>a(n, 0), b(n, 0), pre(n+1, 0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        int dif=b[i]-a[i];
        if(dif>0){
            pre[0]-=dif;
            pre[i]+=(2*dif);
            pre[i+1]+=-(2*dif);
        }
    }
    int f=0;
    a[0]+=pre[0];
    f=(a[0]<b[0]?1:0);
    for(int i=1;i<n;i++){
            pre[i]+=pre[i-1];
            a[i]+=pre[i];
            if(a[i]<b[i]) f=1;
    }

    if(f) no;
    else yes;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}

