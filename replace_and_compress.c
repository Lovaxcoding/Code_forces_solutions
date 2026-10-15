#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[200005];
        scanf("%200000s", s);

        int n = strlen(s);
        int same = 0;
        int different = 0;

        for (int i = 1; i < n - 1; i++)
        {
            if (s[i - 1] == s[i + 1])
            {
                if (s[i] == s[i - 1])
                    same = 1;
                else
                    different = 1;
            }
        }

        printf("%d\n", 1 + same + different);
    }

    return 0;
}