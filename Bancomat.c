#include <stdio.h>
#include <stdlib.h>
void obligation(){
  const int pincode = 0000;
  const int Enter_pincode = 3;
  const int NUMBER_OF_CELLS = 5000;
  const int COUNT = 100;

  int countarray[5000];
  int pinsarray[5000];
  int userpin = 0;
  int admin_pin = 0;
  int money_operation = 0;
  int userpay = 0;
  int adminoperation = 0;
  int i = 0;
}
void admin(){
    int i = 0;
    if (userpin == admin_pin){
        for(;;){
            const int NUMBER_OF_CELLS = 5000;
            const int pincode = 0000;
            printf("You got admin rights");
            printf("\nBalance,press 1");
            printf("\nZero all balance,press 2");
            printf("\nEXIT,press 3");
            scanf("%d",&adminoperation);
            switch(adminoperation){
                case 1:
                for(i = 0;i < NUMBER_OF_CELLS;i++){
                    printf("%d\n" , countarray[i]);
                }
                break;
                case 2:
                for(i = 0;i <NUMBER_OF_CELLS;i++){
                    countarray[i] = 0;
                }
                break;
                case 3:
                return 0;
            }
        }
    }
}
void userpin(){
     const int NUMBER_OF_CELLS = 5000;
     const int pincode = 0000;
     for(;;){
     for(i = 0;i < NUMBER_OF_CELLS && userpin == admin_pin){
            if(pinsarray[i] == userpin){
                printf("\nBalance,press 1");
                printf("\nDeposit money,press 2");
                printf("\nWithdraw money,press 3");
                printf("\nEXIT , press 4");
                scanf("%d",&money_operation);
                switch(money_operation){
                    case 1:
                    printf("On your acconts: %d\n",countarray[i]);
                    break;
                    case 2:
                    printf("\nEnter payment :");
                    scanf("%d",&userpay);
                    countarray[i]=countarray[i]+userpay;
                    printf("On your acconts: %d,",countarray[i]);
                    break;
                    case 3:
                    printf("\nHow much do you want to withdraw?");
                    scanf("%d",&userpay);
                    countarray[i]=countarray[i]=userpay;
                    break;
                    case 4:
                    return 0;
                }
            }
        }
    }
}


int main()
{
   userpin(getInt("Enter pin-code"));
   admin(getInt("Enter pin-code"));
}
