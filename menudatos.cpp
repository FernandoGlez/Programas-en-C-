#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

struct datos{
       
 int clave;
 int nom[30];
           int num;    
 }emp;
       
 
 
       
int main()
{
    
         int *F;
         int opc; 
         int x;
          int num; 
      do{     
      printf("\n *************************///**************************");   
      
        printf("\n");  
        printf("\n                          1- Altas:");
        printf("\n                          2- Bajas:");
        printf("\n                          3- Consultas:");
    
     printf("\n *************************///**************************"); 
     
      
    printf("\n               Ingresa la opcion Deseada:""\n");
        scanf("%d",&opc);
         
      switch(opc)
     {
         case 1: 
      
       
    // F=fopen("omar.dat","ab");
         puts("ingresa una clave:");
          scanf("%d",&num);
       fwrite(&num,sizeof(num),1,F);   
          if(F==NULL)
              {
              printf("\NO EXISTE REGISTRO");
                         }
                         
           printf("\n ingresa un numero:""\n");
          scanf("%d",&num);
     
              
              
             
    printf("desea regresar al menu""\n");
printf("1.-si""\n");
printf("2.-no""\n");
scanf("%d",&x);
     break; 
     
       case 2: 
            
printf("desea regresar al menu""\n");
printf("1.-si""\n");
printf("2.-no""\n");
scanf("%d",&x);
         break; 
         
        case 3:  
           
printf("desea regresar al menu""\n");
printf("1.-si""\n");
printf("2.-no""\n");
scanf("%d",&x);  
 break; 

}}while(x!=2);
getchar();
return 0;
}