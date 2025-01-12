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
    int n, a, b;
    cin >> n >> a >> b;
    if ((b - a) % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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

