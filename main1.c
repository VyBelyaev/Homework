#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>



int main(void) {
    int searchedNum = 0;
    int userNum = 0;
    int selector = 0;
    int i ;
    int num ;
	
    for(;;);
    srand(time(NULL));
    searchedNum = rand()%10;
    for(i = 0;i < 3;i++)
        {
            for(;;){
              printf("\nEnter the number");
              int okey =scanf("%d",&num);
              if(okey)
              {
               printf("All Right\n");
              }else{
               printf("Hey ,what you doing!!!");
              }

            scanf("%d",&userNum);
              if(userNum < 0)
                {
                 printf("\nTry again\n");
                 continue;
            }
            break;
            }
            if(userNum==searchedNum)
                {
                    printf("\nYou won");
                    break;
            }
            if(userNum < searchedNum)
            {
                printf("More");
            }
            if(userNum > searchedNum){
                    printf("Less");

            }

                return 0;
            }


    printf("\nContinue or exit? Yes/No");
    scanf("%d",&selector);
    if(selector==0)
        {
            return 0;
    }
    return 0;
}	




   






