#include <stdio.h>
#include <stdlib.h>

int main()
{
     int height;
     printf("How many floors do you want:");
     scanf("%d",&height);
     int i;
     int j;
     int k;
     int stars;
     int spaces;

     //This is pyramid

     for(i = 0;i <= height; i++){
        
        for(j = 0; j <= i - 1; j++){
         printf("*");
        }
         printf("\n");
        }
     printf("\n");

     for(i = 0; i < height; i++){
        
        for(j = 0; j < height - i; j++ )
            printf("*");
        printf("\n");
        }

     //This is

     for(i = 0; spaces = height , stars =- 1; i <= height; i++,stars += 2 ;spaces--){
        
        for(j = 0;j < spaces;j++){
            printf(" ");
        }
        for(k = 0;k < stars;k++){
        
         printf("*");
        }
         printf("\n");
        }
     for(i = 0;i < height - 1;i++){
      
      printf(" ");
      }
      printf("\n");
}



