#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    // Fill the sequence
    a[0] = 1;          // First element
    a[1] = 1;          // Second element
    a[n - 1] = 1;      // Last element
    int current = 2;   // Start filling from 2

    // Fill the middle elements with increasing numbers
    for (int i = 2; i < n - 1; i++) {
        a[i] = current++;
    }

    // Output the sequence
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

