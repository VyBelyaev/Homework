#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int const pincode [5000];

    srand(time(NULL));

    pincode = rand()%5000;

    int const number [5000];

    srand(time(NULL));

    number = rand()%5000;

    int i = 0;

    int userpincode = 0; //Пин код пользователя = 2323

    int adminpincode = 0; //Пин код админа = 9011

    int sum = 0;



    for(i = 0;i < 3;i++){

        for(;;){

               //Ввод пин кода
               printf("\nEnter your pin code");

                scanf("%d",&userpincode);

                //Ячейка пользователя

                  if(pin == userpincode){

                    printf("\nWithdraw money");

                    printf("\nPut money");

                    printf("\nCheck balance");

                    printf("Enter your pin code");

                    scanf("%d",&userpincode);

                    printf("\nEnter your sun-");

                    scanf("%d",sum);


                    scanf("%d",sum);

                    int const number[5000];

                     for(i = 0;i < 1;i++)

                       number[i] = 0;

                        printf("%d\n" , i,n[i]);

                         printf("%s/n","Your sum = ","%d");{

                             continue ;
                         }

                    return 0;
                }

                //Доступ админа
                else if (pincode == adminpincode){

                 printf("Withdraw all money");

                 printf("\nEnter your sum-");

                 int const number [5000];

                  for(i = 0;i <5000;i++)

                   number[i] = 0;

                   printf("%s\n");

                   for(i = 0; i  < 5000;i++)

                    printf("%d\n" , i,n[i]);{

                       continue ;
                     }

                     {
                       return 0;
                     }

                }else if(pincode != adminpincode ){

                    printf("Access closed");

                    {
                      return 0;
                    }


                }else if(pincode != userpincode){

                    printf("Access closed");
                    {
                     return 0;
                    }

                }
                 return 0;

            }

           return 0;

    }












    
    
        


       
