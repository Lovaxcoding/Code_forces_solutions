#include <stdio.h>
#include <ctype.h>


int main(void)
{
    char input[1001] = "";
    scanf("%1000s", input);
    if (islower(input[0])){
        input[0] = toupper(input[0]);
    }
    printf("%s", input);

    return 0;
}