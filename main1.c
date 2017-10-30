#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>



int main(void) {
 int searchedNum = 0;
 int userNum = 0;
 int selector = 0;
 int i = 0;
 int num = 0;
 int okey =scanf("%d",&num);
 for(;;){
   if(okey ){

     printf("\nAll right");
   }else{
     printf("\nHey ,what you doing!!!");
    }





    srand(time(NULL));
    searchedNum = rand()%10;
    for(i = 0;i < 3;i++){

            for(;;){
              printf("\nEnter the number");

            scanf("%d",&userNum);
              if(userNum < 0){

                 printf("\nTry again\n");
                 continue;
            }
            break;
            }
            if(userNum==searchedNum){

                    printf("\nYou won");
                    break;
            }
            if(userNum < searchedNum){

                printf("More");
                continue ;
            }
            if(userNum > searchedNum){
                    printf("Less");
                    continue;

            }

                return 0;
            }



    printf("\nContinue or exit? Yes/No");
    scanf("%d",&selector);
    if(selector==0){

            return 0;
    }
    return 0;
    }

}





   






