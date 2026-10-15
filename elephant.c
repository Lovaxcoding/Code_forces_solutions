#include <stdio.h>

int main(void)
{
    int elephant_house = 0;
    int step = 0;
    int friends_house ;
    // int move[5] = {1, 2, 3, 4,5};
    int reste;
    scanf("%d", &friends_house);
    if (friends_house >= 1 && friends_house <= 1000000){
        while (friends_house > 0){
            if (friends_house >= 5 ){
                friends_house = friends_house - 5;
                step ++;
            }
            else if(friends_house >= 4){
                friends_house = friends_house - 4;
                step ++;
            }
            else if (friends_house >= 3){
                friends_house = friends_house - 3;
                step ++;
            }
            else if (friends_house >= 2){
                friends_house = friends_house -2;
                step++;
            
            }
            else if(friends_house >= 1){
                friends_house = friends_house-1;
                step++;
            }

            if (friends_house == 0){
                break;
            }

        }
    }
    printf("%d", step);

    return 0;
}