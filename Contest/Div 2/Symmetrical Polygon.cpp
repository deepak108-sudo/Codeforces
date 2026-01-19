#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;

    vector<ll> v(n);
    for (ll &x : v) cin >> x;

    map<ll, ll> mp;
    for (ll x : v) mp[x]++;

    ll base = 0;                 // sum of paired sticks (one side)
    vector<ll> odd, even;

    for (auto &[x, c] : mp) {
        base += x * (c / 2);
        if (c % 2 == 1) odd.push_back(x);
        if (c >= 2) even.push_back(x);
    }

    if (base == 0) {
        cout << 0 << "\n";
        return;
    }

    ll ans = 0;

    // Case 1 & 2: one odd stick
    for (ll x : odd) {
        if (2 * base > x)
            ans = max(ans, 2 * base + x);
    }

    // Case 3: two odd sticks
    sort(odd.begin(), odd.end());
    for (int i = 1; i < (int)odd.size(); i++) {
        if (odd[i] - odd[i - 1] < 2 * base) {
            ans = max(ans, 2 * base + odd[i] + odd[i - 1]);
        }
    }

    // Case 0 odd stick (only pairs)
    for (ll x : even) {
        if (base - x > 0) {
            ans = max(ans, 2 * base);
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
