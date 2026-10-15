#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char incr1[] = "++X";
    char incr2[] = "X++";
    char decr1[] = "--X";
    char decr2[] = "X--";
    int value = 0;
    for (int i =0 ; i < n; i++){
        char word[4];
        scanf("%3s", word);
        if (strcmp(word, incr1) == 0 || strcmp(word, incr2) == 0 ){
            value++;
        }
        else if(strcmp(word, decr1) == 0 || strcmp(word, decr2) == 0){
            value--;
        }
    }
    printf("%d\n",value);

    return 0;
}