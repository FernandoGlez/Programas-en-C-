/*Desarrolle un programa para llevar a cabo la multiplicacion de dos matrices de 5X5.
presente resultados*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 


int main (void)
{
 int a[5][5];
 int b[5][5];
 int c[5][5];
 int i,j,k;
 for(i=0;i<5;i++){
  for(j=0;j<5;j++){
   a[i][j]=rand()%20;
   b[i][j]=rand()%20;
  }
 }
 printf("\n\n");
 printf("***Matriz 1*** \n");
 for(i=0;i<5;i++){
  for(j=0;j<5;j++){
   printf("%d",a[i][j]);
 }
 printf("\n\n");
 }
 printf("\n\n");
 printf("***Matriz 2***\n");
for(i=0;i<5;i++){
  for(j=1;j<5;j++){
   printf("%d",b[i][j]);
 }
 printf("\n");
 }
 printf("\n\n");
 printf("Total:\n");
 for(i=0;i<5;i++){
  for(j=0;j<5;j++){
   c[i][j]=0;
   for(k=0;k<5;k++){
   c[i][j]=a[i][k]*b[k][i]+c[i][j];
   }
   printf("%d",c[i][j]);
   }
   printf("\n");
  }
 printf("\n\n");
getch();
}
