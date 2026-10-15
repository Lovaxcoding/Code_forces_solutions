#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char sum[101];
    char input[101];
    scanf("%100s",input);
    int i_un = 0;
    int i_deux = 0;
    int i_trois = 0;
    char un[101] ="";
    char deux[101]="";
    char trois[101]="";
    char output[101];
    int index_input = 0;
    
    if(strlen(input) == 1){
        printf("%s",input);
    }
    else{

    
    for (int i = 0; i < strlen(input); i++){
        if(input[i] == '1'){
            un[i_un] = input[i];
            i_un++;
        }
        else if(input[i] == '2'){
            deux[i_deux] = input[i];
            i_deux++;
        }
        else if (input[i] == '3'){
            trois[i_trois] = input[i];
            i_trois++;
        }
    }
    for (int i = 0; i < strlen(un); i++){
        output[index_input] = '1';
        output[index_input+1] = '+';
        index_input = index_input +2;
    }
    for (int i = 0; i < strlen(deux); i++){
        output[index_input] = '2';
        output[index_input+1] = '+';
        index_input = index_input +2;
    }
    for (int i = 0; i < strlen(trois); i++){
        output[index_input] = '3';
        output[index_input+1] = '+';
        index_input = index_input +2;
    }
    output[index_input - 1] = '\0';
    printf("%s", output);
    }

    return 0;
}