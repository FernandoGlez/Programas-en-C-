#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

struct datos{
       
 int clave[20];
 int num[30];    
 }emp;
 
int main()
{
         int i,opc,x;
         
       struct datos emp;
      FILE *F;  
    
      do
      { 
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
     F=fopen("datos.dat","ab"); 
           
     if(F==NULL)
     {
     printf("ERROR, EL ARCHIVO NO EXISTE:");
}
     else
     {
      printf("dame un numero:");
      scanf("%d",&emp.num);       
      
      puts("ingresa una clave:");
      scanf("%f",&emp.clave);
          
       
fwrite(&emp,sizeof(emp),1,F);
 fclose(F);
           } 
     break; 
       case 2: 
// F=fopen("datos.dat","rb");
 //F=fopen("datos.dat","wb"); 
 
 //printf("que clave deseas eliminar""\n");  
  
//  do{
           //  fread(&emp,sizeof(emp),1,F)
             
   //  if(emp.clave) {
           // fwrite(&emp,sizeof(emp),1,F);
            //}
//             }
  // while(!feof(F));          
       //  break; 
    //fclose(F);
         
         
        case 3:   
                      
     F=fopen("datos.dat","rb");
   
         printf("datos ingresados:""\n");
            
        while(fread(&emp,sizeof(emp),1,F=0))
        {  
       printf("%d",emp.num);
       printf("%d",emp.clave);
       
       fclose(F);
       }
 break; 
}}while(opc!=4);
getchar();
return 0;
}

© 2014 Microsoft Términos Privacidad y cookies Desarrolladores Español
