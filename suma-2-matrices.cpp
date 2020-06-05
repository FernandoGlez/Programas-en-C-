#include<stdio.h>
#include<stdlib.h>
void suma(int mat1[3][3],int mat2[3][3],int mat3[3][3]);
void muestra(int mat3[3][3]);
int mat1[3][3];
int mat2[3][3];
int mat3[3][3];
int main()
{
    int x,y;
    printf("ingresa el los numeros para la primer matriz:\n");
    for(x=0;x<3;x++)
    {
         for(y=0;y<3;y++)
         {
                scanf("%d",&mat1[x][y]);  
         }
         printf("\n");
    }  
    
    printf("ingresa el los numeros para la segunda matriz:\n");
    for(x=0;x<3;x++)
    {
         for(y=0;y<3;y++)
         {
                scanf("%d",&mat2[x][y]);  
         }
         printf("\n");
    }  
    suma(mat1,mat2,mat3);
    muestra(mat3);
    
    
    
    getchar();
    getchar();
    return 0;
}
    
void suma(int mat1[3][3],int mat2[3][3],int mat3[3][3])
{
     int x,y;
     for(x=0;x<3;x++)
     {
         for(y=0;y<3;y++)
         {
               mat3[x][y]=mat1[x][y]+mat2[x][y];
         }
     }    
}
void muestra(int mat3[3][3])
{
     int x,y;
     for(x=0;x<3;x++)
     {
          for(y=0;y<3;y++)
          {
               printf("%d",mat3[x][y]);
               printf("\n");
          }
     }
}