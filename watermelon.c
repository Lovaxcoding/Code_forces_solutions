#include <stdio.h>


// codeforce challenge : watermellon

int main(void)
{
    // poids du watermellon
    int w;
    scanf("%d", &w);
    
    if (w % 2 == 0 && w / 2 > 1 ){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}