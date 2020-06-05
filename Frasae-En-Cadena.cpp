#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char cadenas[11];
int x;


int main()
{
   
    printf("muestra una frase");
    gets(cadenas);
    
do
{ 
   
    x++;
    
    }while(cadenas[x]!=0);
    printf("%d",x);
    
    getchar();
    getchar();
    return 0;
}
