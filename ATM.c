#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
               int pin [5000];
               srand(time(NULL));
               pin = rand()% 5000;
               int code = 0;
               printf("\nEnter your pin :");
               scanf("%d",&code);
                    if(code == 0000)
                    {
                    printf("\nAccessed");
                    int n [5000] ,i;
                    for (i = 0; i < 1;i ++)
                    n[i] = 0;
                    printf("\nWithdraw money");
                    printf("\nFund your account");

                    printf("\nView balance");
                    for(i =0; i < 1;i ++)
                    printf("%7d\n" , i ,n[i]);
                    }
                    else if (code == 1111)
                    {
                        printf("You got admin rights");
                        int n [5000] ,i;
                        for (i = 0; i <= 5000;i ++)
                        n[i] = 0;
                        printf("\nWithdraw money");
                        printf("\nFund your account");
                        printf("\nView balance");
                        for(i =0; i <= 5000;i ++)
                        printf("%7d\n" , i ,n[i]);
                    }
                    else if(code != 0000)
                    {
                      printf("Access denied");
                    }
}
    
    
        


       
