

vocales
Daniel V E L A T R E   14/04/2010   Conservar este mensaje en la parte superior de la bandeja de entrada  
Para: omarska_88@msn.com

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int vocales(char cadena[]);
int cont=0;
int resultado;
int main()
{
    char palabra[10];
    printf("INGRESA LA PALABRA:  \n");
    gets(palabra);
    vocales(palabra);
    printf("RESULTADO ES:%d",cont);
    getchar();
    getchar();
    return 0;
}
int vocales(char cadena[])
{
     int x;
     char c;
     for(x=0;x<strlen(cadena);x++)
     {
           c=cadena[x];
           if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
           {
              cont++;
           }
           if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
           {
              cont++;
           }          
     }
     return(cont);
}

