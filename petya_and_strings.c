#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char first_w[101];
    char second_w[101];
    char map_first[101];
    char map_sec[101];

    scanf("%100s", first_w);
    scanf("%100s", second_w);

    int len = strlen(first_w);

    for (int i = 0; i < len; i++) {
        map_first[i] = tolower((unsigned char)first_w[i]);
        map_sec[i] = tolower((unsigned char)second_w[i]);
    }

    map_first[len] = '\0';
    map_sec[len] = '\0';

    int result = strcmp(map_first, map_sec);

    if (result > 0) {
        printf("1\n");
    }
    else if (result == 0) {
        printf("0\n");
    }
    else {
        printf("-1\n");
    }

    return 0;
}