#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ff first
#define ss second
const int mod = 1e9+7;
const int N = 200005;

void solve() {
    int n;
    cin >> n;
    vector<int> clocks(n);

    for (int i = 0; i < n; i++) {
        cin >> clocks[i];
    }

    for (int i = 0; i < n; i++) {
        if ((n - i - 1) * 2 >= clocks[i] || i * 2 >= clocks[i]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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

