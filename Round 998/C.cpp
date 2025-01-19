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
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    int score = 0;
    int left = 0, right = n - 1;

    while (left < right) {
        if (x[left] + x[right] == k) {
            score++;
            left++;
            right--;
        } else if (x[left] + x[right] < k) {
            left++;
        } else {
            right--;
        }
    }

    cout << score << endl;
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

