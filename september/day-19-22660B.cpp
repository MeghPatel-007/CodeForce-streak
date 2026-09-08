#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long x, y, k;
    cin >> x >> y >> k;

    long long d = y - x;
    long long total = 0;

    // Phase 1: Jump through blocks where employees get >= 1 extra project
    while (k > 0 && x <= d) {
        long long q = d / x;             // Projects assigned per employee
        long long max_x = d / q;          // Upper limit of employees for this value of q
        long long count = min(k, max_x - x + 1); // Total months in this block

        long long rem_start = d % x;     // Leftover for Monocarp on day 1 of this block

        // Sum of Arithmetic Progression: rem_start + (rem_start - q) + (rem_start - 2q) ...
        long long sum_block = count * rem_start - q * (count * (count - 1) / 2);

        total += sum_block;

        // Jump ahead by 'count' months
        x += count;
        k -= count;
    }

    // Phase 2: Employees > Extra projects (q = 0)
    // Monocarp does all 'd' projects every month
    if (k > 0) {
        total += k * d;
    }

    cout << total << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
