#include <stdio.h>
#include <stdlib.h>


char *getString(int size){
    char *array = new char[size];
    scanf(array,size);
    return array;
}
int *getArray(int size){
    int *array = new int[size];
    int i = 0;
    for(i = 0;i < size;i++){
        array [i] = 0;
    }
    return array;
}
char *getCharArray(char *str,int size){
    int tempCounter = 0;
    char *CharsArray = new char[1000000];
    int i = 0;
    for(i = 0;i < strlen(str);i++){
        char c = str[i];
        if(c =='')
            continue;
        if(){
            CharsArray[tempCounter] = c;
            tempCounter++;
        }
    }
    CharsArray[tempCounter]=0;
    return CharsArray;

}
void countChars(char *str, char *CharArray,int *countArray){
    int i = 0;
    for(i = 0;i < strlen(CharArray);i++){
        int j = 0;
        for(j = 0;j <strlen(str);j++){
            if(str[j]==CharArray[i]){
                countersArray[i]++;
            }
        }
    }
}
void sort(char *CharArray,int CharNumberArray){
    int i = 0;
    int j = 0;
    int n = strlen(CharArray);
    for(i = 0;i < n - 1;i++){
        for(j = 0;j < n - i - 1;j++){
            if(CharNumberArray[j] < CharNumberArray[j + 1]){
                deal(&CharNumberArray[j],&CharNumberArray[j + 1]);
                deal(&CharArray[j],&CharArray[j + 1]);
            }
        }
    }
}
void Result(char *CharArray,int *CharNumberArray){
    int i = 0;
    for(i = 0;i < strlen(CharArray);i++){
        printf(CharArray[i],CharNumberArray[i]);
    }
}


int main()
{
 int *CharNumberArray = getArray(100);
 char *str = gerString(1000000);
 char *CharArray = gerCharArray(str,strlen(str));
 countChars(str,CharArray,CharNumberArray);
 sort(CharArray,CharNumberArray);
 Result(CharArray,CharNumberArray);
}
