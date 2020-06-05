#include<stdlib.h>
#include<iostream>
#include<stdio.h>

int main()
{
    int x;
    char palabra[30];
    printf("dame una palabra:");
    scanf("%s",palabra);
    printf("la palabra es ::%s",palabra);
    printf("\ndame otras palabra:");
    _flushall();
    gets(palabra);
    printf("la palabra es_:::");
    puts(palabra);
    printf("mostrar caracter x caracter:\n");
    for(x=0;x<=30;x++)
    printf("% %c\n",palabra[x],palabra[x]);
    _flushall();
    getchar();
    return 0;
}
 
