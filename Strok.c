#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  char stroka[100000];
  char sym;
  int count;
  int i;

  printf("Enter line: ");
  gets(stroka);
  for(;;){
  printf("\nEnter symbol : ");
    sym = getchar();
    count = 0;
    for(i=0; stroka[i]!='\0'; i++){
     if(stroka[i]==sym)
       count++;
  }
 
  printf("Symbol ");
  putchar(sym); // 
  printf(" occurs %d once",count);
  getchar();
  }

  return 0;
}














