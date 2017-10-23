#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int const number [5000] ;

   int const pincode [5000] ;

   srand(time(NULL)) ;

   pincode = rand()%5000;

   int i = 0 ;

   int userpincode = 0;

   int adminpincode = 0;

   for(i = 0;i < 3; i++){

    for(;;){

       printf("Enter your pin code:");

       scanf("%",&pincode);

       //Доступ пользователя

       if(pincode == userpincode){

           int const number [5000];

           srand(time(NULL));

           number = rand()%5000;

           for(i = 0 ; i <= 5000 ;i++ )

             number [i] = 0;   // Инициализация массива

             printf("%4s%4s%4s\n" ,"Check balance","Withdraw money","Put money");

           for(i = 0;i < 1;i++)   // Вывод элементов массива

             printf("%4d%4d%4d\n",i,number[i]);

             break;


       }

       //

       else if(pincode == adminpincode){

        int const number [5000];

        srand(time(NULL));

        number = rand()%5000;

        for(i = 0 ; i <= 5000 ; i ++)

            number [i] = 0 ; // Инициализация массива

            printf("%4s\n","Withdraw all money.Yes\No?");

            for(i = 0 ;i <= 5000;i++) // Вывод элементов массива


                printf("%d\n",i,number [i]);

                break ;

       }

       //Проверка

       else (pincode != userpincode){

          printf("Access close");

          return 0;

       }

       else if(pincode != adminpincode){

          printf("Access close");

          return 0;
       }

    }

    return 0;

   }

  return 0;

}







    
    
        


       
