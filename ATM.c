#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int const pincode [10000];
    srand(time(NULL));
    pincode = rand()% 10000;
    int const userpincode [10000];
    srand(time(NULL));
    userpincode = rand()%10000;
    int pinadmin = 0;
    int userpin = 0;
    int i = 0;

    int sum = 0;

     for(;;){
      //Ввод пинкода.   
      printf("\nEnter your pin :");

      scanf("%d",&pincode);
      //Три попытки.
      for(i = 0;i < 3;i ++){



      }
      //Ячейка абонента.
        if(pincode == userpincode){

            printf("View balance");

            printf("Withdraw money");

            printf("Fund your account");

        for (i = 0; i < 1;i ++)

           n[i] = 0;

            int cells [10000] ,i;

             for (i = 0; i < 1;i ++)

             n[i] = 0;

          for(i =0; i < 1;i ++)
            printf("%d\n" , i ,n[i]);

            printf("Enter your sum-");

            scanf("%d",&sum);
            printf("%d\nYour sum",sum);
            

            continue ;
        }
        break ;
    }
           //Доступ админа.
           else if (pincode == pinadmin ){

             int cells [10000] ,i;

             for (i = 0; i <= 10000;i ++)
              n[i] = 0;
               for(i =0; i <= 10000;i ++)

                printf("%d\n" , i ,n[i]);

                printf("Do you want to with all the money? Yes/No");

                printf("Enter pincode admin");

                scanf("%d",&pinadmin);
                printf("Enter you sum-");
                scanf("%d",&sum);
                printf("%d\nYour sum =",sum);

             continue ;
             }

             break ;


    }
    return 0;
}








    
    
        


       
