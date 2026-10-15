#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char word[100];
    int n;
    scanf("%d", &n);
    for (int i=0; i <= n-1; i++ ){
        scanf("%s", word);
        size_t len = strlen(word);
        int longueur = (int)len;
        if (longueur > 10 ){
            char result[20];
            snprintf(result, sizeof(result), "%c%d%c", word[0], longueur - 2, word[longueur - 1]);
            printf("%s\n", result);
        }
        else{
            printf("%s\n", word);
        }
        
    }
    
    return 0;
}