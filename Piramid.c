#include <stdio.h>
#include <stdlib.h>
int piramid(int height){
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
}
void printf(char c,int count){
    int i = 0;
    for(i = 0;i < count;i++){
        printf("%c",c);
 }
}
void changeCounters(int *stars,int *spaces){
    *stars+=2;
    *spaces-=1;
}
int drawTree(int height){
    if(height <= 0){
        printf("");
        return -1;
    }
    int spaces = height - 1;
    int stars = 1;
    int i = 0;
    for(i = 0;i < height;i++){
        printchar('',spaces);
        pritchar('*',stars);
        changeCounters(&stars,&spaces);
        printf("\n");
    }
    return 0;
}
int main()
{
   piramid(getInt("Enter height-"));
   drawTree();
}
