#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{   
    int len;
    scanf("%d", &len);
    char table[50] = "";
    char final[50] = "";
    scanf("%s", table);
    int output = 0;
    if (len >= 1 && len  <=50){
        final[0] = table[0];
        for (int i = 1; i<len; i++){
        if (table[i-1] == table[i]){
            final[i] = table[i];
            output++;
        }
    }
    
    printf("%d", output);
    }
    
    
    return 0;
}