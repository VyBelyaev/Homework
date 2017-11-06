#include <stdio.h>
#include <stdlib.h>
void generation(){
    srand(time(NULL));
    searchedNum = rand()%10;
}
void body(){
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
      for(;;){
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
}
int main()
{
  body(getInt("Enter number-"));
}































//}
