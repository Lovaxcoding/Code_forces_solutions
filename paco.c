#include <stdio.h>

void solve() {
  int n;
  scanf("%d", & n);

  long long a[n + 1];
  for (int i = 1; i <= n; i++) {
    scanf("%lld", & a[i]);
  }

  long long S = 0;
  long long sign = 1;
  for (int i = n; i >= 1; i--) {
    S += sign * a[i];
    sign = -sign;
  }

  long long p;
  if (n % 2 != 0) {
    p = S;
  } else {
    p = -S;
  }

  printf("%lld\n", p);
}

int main() {
  int t;
  if (scanf("%d", & t) == 1) {
    while (t--) {
      solve();
    }
  }
  return 0;
}