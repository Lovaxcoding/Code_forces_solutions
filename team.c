#include <stdio.h>

int main(void)
{
    // problème à résoudre
    int n;
    scanf("%d", &n);
    int result = 0;

    // vote pour solution
    int petya, vasya, tonya;
    for (int i = 0; i <= n -1; i++){
        scanf("%d %d %d", &petya, &vasya, &tonya);
        if (petya + vasya+ tonya >= 2){
            result = result + 1;
        }
        
    }
    printf("%d\n", result);
    return 0;
}