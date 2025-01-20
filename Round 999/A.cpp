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
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end(), [](int x, int y) {
        return (x % 2 == 0) > (y % 2 == 0);
    });

    int points = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum % 2 == 0) {
            points++;
            while (sum % 2 == 0) sum /= 2;
        }
    }
    cout << points << '\n';
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

