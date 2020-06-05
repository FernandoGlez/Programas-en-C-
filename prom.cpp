#include<stdio.h>
#include<stdlib.h>
float prom(float arreglo[],int num);
float arreglo[10];
int main()
{
    int x;
    int num;
    float d;
    printf("INGRESA LOS NUMEROS:  \n");
    for(x=0;x<=10;x++)
    {
        scanf("%f",& arreglo[x]);
    
    }
    printf("ingresa otro numero ");  
    scanf("%d",&num);
    d=prom(arreglo,num);
    printf("el resultado es:%f ",d);
    getchar(); getchar();
    return 0;
}
float prom(float arreglo[],int num)
{
     int x;
     float res=0;
     for(x=0;x<num;x++)
     {
          res=res+arreglo[x];
          
     }
     res=res/num;
     return(res); 
}