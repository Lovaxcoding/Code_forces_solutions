#include <stdio.h>

int main(void)
{
    int t, x0, y0, R;
    int x, y;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &x0, &y0, &R);

        x = x0 + R;
        y = y0;

        printf("%d %d\n", x, y);
    }

    return 0;
}