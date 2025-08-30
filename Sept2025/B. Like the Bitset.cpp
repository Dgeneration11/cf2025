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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    
    int continous = 0, cant = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            continous++;
        } else {
            continous = 0;
        }

        if(continous >= k) {
            cant = 1;
        } 
    }

    if(cant) {
        cout << "NO" << endl;
        return;
    }

    vector<int> ans(n);
    int increasing = 1, descreasing = n;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') {
            ans[i] = increasing++;
        } else {
            ans[i] = descreasing--;
        }
    }

    cout << "YES" << endl;
    for(auto i : ans ) {
        cout << i << " ";
    }
    cout << endl;
}

// Main driver
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
