#include <stdio.h>

int main(void)
{
    int limak, bob;
    scanf("%d %d", &limak, &bob);
    int year = 0;
    while (limak <= bob){
        limak = limak *3;
        bob = bob*2;
        year++;
    }

    printf("%d", year);
    return 0;
}