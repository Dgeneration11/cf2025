#include<bits/stdc++.h>
using namespace std;

bool solve (int a, int b) {
    return max(a, b) <= 2 * (min(a, b) + 1);
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        bool first_half = solve(a,b);
        bool second_half = solve(c - a, d - b);

        if(first_half && second_half) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;

}