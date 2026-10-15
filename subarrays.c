#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[200005];
        long long prefix[200005];

        prefix[0] = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            prefix[i + 1] = (prefix[i] + a[i]) % k;
        }

        long long freq[200005] = {0};
        long long ans = 0;

        for (int r = k + 1; r <= n; r++)
        {
            freq[prefix[r - k - 1]]++;

            ans += freq[prefix[r]];
        }

        printf("%lld\n", ans);
    }

    return 0;
}