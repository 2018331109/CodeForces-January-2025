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
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;

    int maxFib = 0;

    for (int a3 = -100; a3 <= 100; ++a3) {
        int fib = 0;
        if (a1 + a2 == a3) fib++;
        if (a2 + a3 == a4) fib++;
        if (a3 + a4 == a5) fib++;
        maxFib = max(maxFib, fib);
    }

    cout << maxFib << endl;
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

