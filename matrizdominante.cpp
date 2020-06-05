#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
     
   int main()
     {
            
         char repetir;
         int opc,c=0,c2=0;
         int x,aux;
         int dato,d ; 
         int mat[20][20],i=0,j=0,n;
         int esIdentidad = 1;
         int esNula=0; 
         int esNormal;
        int(esEscalar);
        int esSimetrica;
        
             do{
        
        printf("\n                   1-Matriz Normal:");
        printf("\n                   2-Matriz Identidad:");
        printf("\n                   3-Matriz Nula:");
        printf("\n                   4-Matriz Escalar:");
        printf("\n                   5-Simetrica:");
        printf("\n                   6-Matriz Dominante:");
        printf("\n                   7-Salir:""\n""\n");
        printf("                   Ingresa la opcion Deseada:""\n");
        scanf("%d",&opc);
         
      switch(opc)
     {
         case 1: 
              
       printf("Dame el tamano de la matriz: ""\n""\n");
       scanf("%d", &n);
      for(i = 0; i < n; i++)
          for(j = 0; j < n; j++)
          {
               printf( "Matriz[%d][%d]: ", i, j );
               scanf( "%d", &mat[i][j] );
               }
     for(i = 0; i < n; i++)
      {
          for(j = 0; j < n; j++)
               printf("%d ", mat[i][j]);
               
          printf("\n");
      }
        if(esIdentidad)
          printf( "Su matriz es una matriz Normal: .""\n""\n");
 
 printf("desea regresar al menu""\n");
printf("1.-si""\n");
printf("2.-no""\n");
scanf("%d",&x);
 break; 
       case 2: 
            
         
       printf("Dame el tamano de la matriz: ""\n");
       scanf("%d", &n);
 
       for(i = 0; i < n; i++){
           for(j = 0; j < n; j++)
            {
               printf( "Matriz[%d][%d]: ", i, j );
               scanf( "%d", &mat[i][j] );
            
               if(i==j && mat[i][j]==1)
               c=c+mat[i][j];
 
                else
              c2=c2+mat[i][j];
                }
               } 
 
       for(i = 0; i < n; i++)
       {
          for(j = 0; j < n; j++)
               printf("%d ", mat[i][j]);
               printf("\n");
       }
    
               
      if(c==n && c2==0)
      {
          printf( "Es matriz identidad.\n");
          }
     else
     {
          printf( "No es matriz identidad.\n");
}
    printf("desea regresar al menu""\n");
printf("1.-si""\n");
printf("2.-no""\n");
scanf("%d",&x);
 break; 
    case 3: 
            
       printf("Dame el tamano de la matriz: ""\n");
       scanf("%d", &n);
 
       for(i = 0; i < n; i++)
           for(j = 0; j < n; j++)
            {
               printf( "Introduce los datos de la matriz[%d][%d]: ", i, j );
               scanf( "%d", &mat[i][j] );
               if((mat[i][j] == 0) &&(i==j))
                 c= c+1;  
                  
           }
       for(i = 0; i < n; i++)
       {
          for(j = 0; j < n; j++)
 
               printf("%d ", mat[i][j]);
               printf("\n");
               }
 
   if(c=(n*n)){
          printf( "Si es Nula =) \n");
}
     else
     {
          printf( "Lo siento pero esa matriz no es Nula.\n");
}
printf("desea regresar al menu""\n");
printf("1.-si""\n");
printf("2.-no""\n");
scanf("%d",&x);
 break; 
    case 4: 
            
       printf("Dame el tamano de la matriz: ""\n");
       scanf("%d", &n);
      for(i = 0; i < n; i++)
           for(j = 0; j < n; j++)
            {
               printf( "Matriz[%d][%d]: ",(i+1), (j+1));
               scanf( "%d", &mat[i][j] );
               if( (mat[i][j]  && j == i) ||
               (mat[i][j]  && i == j))
            esSimetrica = 0;
           }
       for(i = 0; i < n; i++)
       {
          for(j = 0; j < n; j++)
               printf("%d ", mat[i][j]);
               printf("\n");
       }
    
               
 
      if(esEscalar)
          printf( "Si es Escalar =) ""\n""\n");
     else
          printf( "Lo siento pero esa matriz no es Escalar.""\n""\n");

printf("desea regresar al menu""\n");
printf("1.-si""\n");
printf("2.-no""\n");
scanf("%d",&x); 
 break; 
 
  case 5: 
            
       printf("Dame el tamano de la matriz: ""\n");
       scanf("%d", &n);
 
       for(i = 0; i < n; i++)
           for(j = 0; j < n; j++)
            {
               printf( "Matriz[%d][%d]: ", i, j );
               scanf( "%d", &mat[i][j] );
               if( (mat[i][j] && j == i) ||
               (mat[i][j] && i == j))
                    esSimetrica = 0;
           }
       for(i = 0; i < n; i++)
       {
          for(j = 0; j < n; j++)
               printf("%d ", mat[i][j]);
               printf("\n");
       }
    
      if(esSimetrica)
          printf( "Es matriz Simetrica.\n");
     else
          printf( "No es matriz simetrica .\n");
    printf("desea regresar al menu""\n");
printf("1.-si""\n");
printf("2.-no""\n");
scanf("%d",&x);
x==2;
 break; 
 
 
    case 6:
         
  printf("Dame el tamano de la matriz: ""\n");
       scanf("%d", &n);
 
       for(i = 0; i < n; i++){
           for(j = 0; j < n; j++)
            {
               printf( "Matriz[%d][%d]: ", i, j );
               scanf( "%d", &mat[i][j] );
               }
            } 
            
               
       for(i = 0; i < n; i++)
       {
       aux=0;
       
       for(j = 0; j < n; j++)
       {
         aux=aux+mat[i][j];      
         }   
         }    
               
 
       for(i = 0; i < n; i++)
       {
          for(j = 0; j < n; j++)
               printf("%d ", mat[i][j]);
               printf("\n");
       }
    
               
         if(d==1)
         {
          printf( "Es matriz Dominante.\n");
          }
          
         else
     { 
        if(d==0)
         {  
     
          printf( "No es matriz Dominante.\n");
}
        
    printf("desea regresar al menu""\n");
printf("1.-si""\n");
printf("2.-no""\n");
scanf("%d",&x);
 break; 
case 7:
exit (0); 
break;
 
}}while(x!=2);
_flushall();
getchar();
getchar();
return 0;
}

    