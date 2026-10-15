#include <stdio.h>

void solve() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long k = b;
    if (a - b < k) k = a - b;
    if (a / 2 < k) k = a / 2;
    
    if (k <= 0) {
        printf("-1\n");
    } else {
        printf("%lld\n", k);
    }
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        solve();
    }
    return 0;
}