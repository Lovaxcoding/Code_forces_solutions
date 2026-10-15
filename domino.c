#include <stdio.h>


int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    int surface = m*n;
    int result = surface / 2;
    printf("%d\n", result);
    return 0;
}