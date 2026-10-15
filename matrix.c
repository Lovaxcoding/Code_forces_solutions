#include <stdio.h>




int main(void)
{
    int matrix[5][5];
    int ligne_centre = 2;
    int colonne_centre = 2;
    
    int ligne_un, colonne_un;
    int number_mag;
    int mouv=0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] > 0 ){
                ligne_un = i;
                colonne_un = j;
            }
        }
    }
    number_mag =matrix[ligne_un][colonne_un];
    int centre = matrix[ligne_centre][colonne_centre];
    do {
        if(ligne_centre > ligne_un){
            ligne_un++;
            mouv++;
        }
        else if (ligne_centre < ligne_un ){
            ligne_un--;
            mouv++;
        }
        else if (colonne_centre < colonne_un) {
            colonne_un--;
            mouv++;
        
        }
        else if (colonne_centre > colonne_un) {
            colonne_un++;
            mouv++;
        }
        else if(colonne_centre == colonne_un && ligne_centre == ligne_un){
            break;
        }
    }while ( number_mag!= centre);

    printf("%d", mouv);

    return 0;
}