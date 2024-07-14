//  ! Did not understand  (https://www.spoj.com/problems/OPMODULO/)
#include <iostream>
using namespace std;

int main() {
    long long l, r;
    cin >> l >> r;

    unsigned long long ans = 0;
    long long x = 1;

    while (x < l) {
        x = 2 * x;
    }

    while (x <= r) {
        ans += x;
        x = 2 * x;
    }

    cout << ans << endl;

    return 0;
}
