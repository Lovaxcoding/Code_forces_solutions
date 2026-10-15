#include <stdio.h>
#include <string.h>


int main(void)
{
    char name[101];
    int odd;
    int index = 1;
    scanf("%100s", name);
    char comparaison[101] ="";
    //LOGIQUE
    comparaison[0] = name[0];
    for (int i = 0; i < strlen(name); i++){
        char *p = strchr(comparaison, name[i]);
        if(p == NULL){
            comparaison[index] = name[i];
            comparaison[index +1] = '\0';
            index++;
        }
    }
    odd = strlen(comparaison);
    if (odd % 2 == 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
    
    return 0;
}