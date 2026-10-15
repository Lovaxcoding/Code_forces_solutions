#include <stdio.h>

int main(void)
{
    int testcase;
    scanf("%d", &testcase);

    // Traiter chaque cas de test indépendamment
    for (int t = 0; t < testcase; t++)
    {
        int n;
        char s[200001];

        // Lire le nombre de documents et la chaîne de commandes
        scanf("%d", &n);
        scanf("%s", s);

        // Pile contenant les numéros des documents en attente
        int stack[200001];

        // -1 signifie que la pile est vide
        int top = -1;

        // printed[i] = 1 : le document i a été imprimé
        // printed[i] = 0 : le document i n'a pas encore été imprimé
        // L'indice 0 est inutilisé : les documents sont numérotés de 1 à n
        int printed[200001] = {0};

        // Parcourir toutes les commandes
        for (int j = 0; j < n; j++)
        {
            // Numéro du document courant : j commence à 0
            // mais les documents commencent à 1
            int document = j + 1;

            // COMMANDE 1 : placer le document courant dans la pile
            if (s[j] == '1')
            {
                top++;
                stack[top] = document;

                // Attention : le document n'est pas encore imprimé
            }

            // COMMANDE 2 : imprimer le document au sommet de la pile
            else if (s[j] == '2')
            {
                // Si la pile n'est pas vide
                if (top >= 0)
                {
                    // Récupérer le numéro du document au sommet
                    int doc = stack[top];

                    // Marquer ce document comme imprimé
                    printed[doc] = 1;

                    // Retirer le document de la pile
                    top--;
                }
                else
                {
                    // Si la pile est vide, imprimer directement
                    // le document courant
                    printed[document] = 1;
                }
            }

            // COMMANDE 3 : imprimer directement le document courant
            else if (s[j] == '3')
            {
                printed[document] = 1;
            }
        }

        // Compter les documents qui n'ont jamais été imprimés
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            if (printed[i] == 0)
            {
                count++;
            }
        }

        // Afficher le nombre de documents non imprimés
        printf("%d\n", count);

        // Afficher leurs numéros dans l'ordre croissant
        int first = 1;

        for (int i = 1; i <= n; i++)
        {
            if (printed[i] == 0)
            {
                // Éviter d'afficher un espace avant le premier numéro
                if (!first)
                {
                    printf(" ");
                }

                printf("%d", i);
                first = 0;
            }
        }

        printf("\n");
    }

    return 0;
}