#include <bits/stdc++.h>
using namespace std;

// Shortcuts
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

// Debug (disable in contests for speed)
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << "\n";
#else
    #define debug(x)
#endif

// Fast I/O
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// Solve one test case
void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<int, int> freq;
    int ans = 0;
    int current = 0;
    for(auto i : a) {
        freq[i]++;
        if(freq[i] % i == 0) {
            current += i ;
        }
    }

    cout << max(ans, current) << endl;
}

// Main driver
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}