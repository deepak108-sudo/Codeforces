#include <bits/stdc++.h>
using namespace std;

long long n;

// Function to check if "1100" occurs starting at index i
bool check_1100(const string &s, long long i) {
    if (i < 0) return false;
    if (i >= (long long)s.size() - 3) return false;
    return (s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0');
}

void solve() {
    string s;
    cin >> s;
    n = s.size();

    // Initial count of "1100"
    long long count = 0;
    for (long long i = 0; i < n; i++) {
        if (check_1100(s, i)) count++;
    }

    long long q; 
    cin >> q;
    while (q--) {
        long long i, v;
        cin >> i >> v;
        i--;  // converting to 0-based index

        if (s[i] != char('0' + v)) {
            // check neighborhood before change
            bool before = check_1100(s, i-3) || check_1100(s, i-2) 
                        || check_1100(s, i-1) || check_1100(s, i);

            // apply the change
            s[i] = char('0' + v);

            // check neighborhood after change
            bool after = check_1100(s, i-3) || check_1100(s, i-2) 
                       || check_1100(s, i-1) || check_1100(s, i);

            count += (after - before);
        }

        cout << (count > 0 ? "YES\n" : "NO\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
