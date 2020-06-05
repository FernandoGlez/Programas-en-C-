#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char cadena[30];
char cadena2[30];
char uni[60];
int x;
int main()
{
     printf("ingresa una palabra");
     gets(cadena);
     printf("ingresa la segunda palabra");
     gets(cadena2);
     
     printf ("%s",cadena);
     printf(" ");
     printf ("%s",cadena2);
     getchar();
     getchar();
     return 0;
}
     
