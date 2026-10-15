#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int matrix[5][5];
    int ligne_un = 0;
    int colonne_un = 0;
    int mouv;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] == 1) {
                ligne_un = i;
                colonne_un = j;
            }
        }
    }

    mouv = abs(ligne_un - 2) + abs(colonne_un - 2);

    printf("%d\n", mouv);

    return 0;
}