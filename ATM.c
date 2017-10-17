#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main()
{
    int n [5000];
    int i;
    int code = 0;
    int pin= 0;

    for(;;);
    srand(time(NULL));
    code = rand()%5000;
    for(i = 0;i < 3;i++)
    {
        for(;;)
            {
               printf("\nEnter your pin");
               scanf("%d",&pin);
                    if(pin == 0000)
                    {
                    printf("\nAccessed");
                    }
                    
                    int n [5000];
                    for(i = 0;i <5000;i++)
                    n[i] = 0;
                    printf("%s%13s\n" , "Withdraw cash" , "View balance");
                    for(i = 0; i  < 5000;i++)
                    printf("%7d%13d\n" , i,n[i]);
                    else if (pin == 1111)
                    {
                      printf("Withdraw all money from the ATM ? Yes/No");

                    }



            }
             return 0 ;
    }
     return 0 ;
}
