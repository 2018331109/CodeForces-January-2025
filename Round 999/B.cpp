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
    map<int, int>mp;
    vector<int> a(n);
    int mx=INT_MIN, index=-1, f=0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        if(mp[a[i]]>=2){
            f=1;
            if(mx<a[i]){
                mx=a[i];
                index=i-1;
            }
        }
    }
    if(f==0){
        neg;
        return;
    }

    for(int i=0;i<n-1;i++){
        if(i==index or i+1==index or i-1==index) continue;
        int dif=(abs(a[i]-a[i+1])/2)+1;
        if(dif<=mx){
            cout<<mx<<" "<<mx<<" "<<a[i]<<" "<<a[i+1]<<endl;
            return;
        }
    }
    neg;
    return;


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

