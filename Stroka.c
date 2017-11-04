#include <stdio.h>
#include <stdlib.h>



int main(){

 const int STR_SIZE = [1000000];

 const int Temp_ArraySize = [100];

 char singleCharArray[Temp_ArraySize];

 int charNumberArray[Temp_ArraySize];

 char *str = new char[STR_SIZE];

 scanf(str,STR_SIZE);

 int i = 0;

 for(i = 0;i < Temp_ArraySize;i++){
    charNumberArray[i] = 0;
 }

 int tempArraycounter = 0;

 for(i = 0;i < strlen(str);i++){

    char c = str[i];

    if(c==''){

        continue;
    }
 }
 if(){

    singleCharArray[tempArraycounter]= c;

    tempArraycounter++;
 }
 singleCharArray[tempArraycounter]=0;

 for(i = 0;i < strlen(singleCharArray);i++){

    for(j = 0;j < strlen(str);j++){

        if(singleCharArray[i]==str[j]){

            charNumberArray[j]++;
        }
    }
 }
 printf("\n");

 for(i = 0;i < strlen(singleCharArray);i++){

    printf(singleCharArray[i],charNumberArray[i]);
 }
 int i;

 int j;

 int n = tempArraycounter;

 for(i = 0;i < n - 1;i++){

    for(j = 0;j < n - i - 1;j++){

        if(charNumberArray[j]>charNumberArray[j + 1]){

            scanf(&charNumberArray[j],charNumberArray[j + 1]);

            scanf(&singleCharArray[j],singleCharArray[j + 1]);
        }
    }
 }
 printf("\n");

 for(i = 0;i < strlen(singleCharArray);i++){

    printf(singleCharArray[i],charNumberArray[i]);
 }


}

