#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
int matriz[4][4],i,j;
 for(i=1;i<4;i++)
  {
   for(j=1;j<4;j++)
   {
 printf("Intruduzca el valor [%i][%i]: ",i,j);
 scanf("%i",&matriz[i][j]);
 
   }
 }
 for(i=1;i<4;i++)
 {
  for(j=1;j<4;j++)
   {
                   gotoxy(5,24);printf(" %d\n",matriz[i][j]);
                   getch();
                   }
                   }
                   
//f("Valor total: %i",suma);
getchar();
getchar();
return 0;
}
