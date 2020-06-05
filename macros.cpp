#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define c1(r) ((2*3.1416)*r)
#define c2(r) (3.141*r*r)
#define r1(b,h) (b*h)
#define r2(b,h) ((b*h)*2)
#define cu1(l) (l*4)
#define cu2(l) (l*l)
float r,b,h,l;
int n;
int  main()
{
     printf("quieres calcular: n 1)perimetro de un circulo, n //n2)area de un circulo,3)area de un rectanglo,4)perimetro de un rectangulo,5)perimetro de un cuadrado,6)area de un cuadrado");
     scanf("%d", & n);
     if (n==1)
     {
             printf("dame el radio");
             scanf("%f",& r);
             printf("el perimetro es: %f",c1(r));
     }
     if (n==2)
     {
             printf("dame el radio");
             scanf("%f",& r);
             printf("el area es: %f",c2(r));
     }
     if (n==3)
     {
             printf("dame la base");
             scanf("%f",& b);
             printf("dame la altura");
             scanf("%f",& h);
             printf("el area es: %f",r1(b,h));
     }
     if (n==4)
     {
             printf("dame la base");
             scanf("%f",& b);
             printf("dame la altura");
             scanf("%f",& h);
             printf("el perimetro es: %f",r2(b,h));
     }
     if (n==5)
     {
             printf("dame el lado");
             scanf("%f",& l);
             printf("el area es: %f",cu1(l));
     }
    if (n==6)
    {
             printf("dame el lado");
            scanf("%f",& l);
           printf("el area es: %f",cu2(l));
    }
     _flushall();
     getchar();
}
