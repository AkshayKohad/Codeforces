#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Helper function to compute the greatest common divisor (GCD)
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Function to simplify the fraction
pair<ll, ll> simplify_fraction(ll num, ll den) {
    if (den == 0) {
        return {num, den}; // Handle division by zero as a special case
    }
    if (num == 0) {
        return {0, 1}; // Handle 0/den as a special case
    }
    
    ll g = gcd(abs(num), abs(den));
    num /= g;
    den /= g;
    if (den < 0) {
        num = -num;
        den = -den;
    }
    return {num, den};
}

int main() {
    ll n;
    cin >> n;

    vector<ll> a(n);
    vector<ll> b(n);

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }

    map<pair<ll, ll>, ll> mp;
    ll both_zeroes = 0;

    for (ll i = 0; i < n; i++) {
        if (a[i] == 0 && b[i] != 0) {
            continue;
        }

        if (b[i] == 0 && a[i] == 0) {
            both_zeroes++;
            continue;
        }

        pair<ll, ll> frac = simplify_fraction(b[i], a[i]);
        mp[frac]++;
        //cout << frac.first << "/" << frac.second << " ";
    }
    cout << endl;

    ll ans = 0;
    for (auto k : mp) {
        ans = max(ans, k.second);
    }

    cout << ans + both_zeroes << endl;
}
