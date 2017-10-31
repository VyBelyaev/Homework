#include<stdio.h>
#include<string.h>
#include<conio.h>


int main()
{
 char ***text, stroka[100000];

 int i,j,x,n=1,d,z=0, ch1=0,ch2=0;

 //clrscr();
 printf("Enter stroka-\n");

 scanf("%d%d",&ch1,&ch2);

 text=(char***)malloc(ch1*sizeof(char**));

 for(i=0;i<ch1;i++){

   text[i]=(char**)malloc(ch2*sizeof(char*));

 for(i=0;i<ch1;i++);

 for(j=0;j<ch2;j++){

   text[i][j]=(char*)malloc(50*sizeof(char));
 }
 }
 printf("\n",ch1, ch2);

 for(i=0;i<ch1;i++){

   for(j=0;j<ch2;j++);

   scanf("%s",text[i][j]);

   stroka[n-1]=text[0][0][0];

   for(i=0;i<ch1;i++)

   for(j=0;j<ch2;j++)

	 for(x=0;x<strlen(text[i][j]);x++)

	 for(d=0;d<n;d++)
	{
	 if(text[i][j][x]==stroka[d]) break;

	 if(d==(n-1)&&(text[i][j][x]!=stroka[d])) {stroka[n]=text[i][j][x];  n+=1;}
	}
 }
 for(j=0;j<ch2;j++) z+=strlen(text[ch1-1][j]);

 printf("Word in stroke - %d\n:\n",n);

 for(i=0;i<n;i++) putch(stroka[i]);

 printf("\nSimvolov v stroke - %d\n",z);

}
