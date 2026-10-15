#include <stddef.h>
#include <stdio.h>

int main(void)
{
    int n,k;
    scanf("%d %d", &n, &k);
    int score[50];
    int score_p;
    int qualified = 0;
    for (int i=0; i<n; i++){
        scanf("%d", &score[i]);

    }
    score_p = score[k-1];
    for (int i = 0; i<n ; i++){
        if (score[i] >= score_p){
            if (score[i]>0){
                qualified++;
            }
        }
    }
    printf("%d", qualified);

    return 0;
}