#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 
#include <stdio.h>
 
void menu();
void Alta(FILE *Fichero);
void Consul(FILE *Fichero);
void Baja();
void Modif();
struct datos {
   char Nombre[25];
   char Carrera[15];
   int Matricula;
   int Edad;
   float Peso;
   
}emp;
 
int main(int argc, char** argv)
{
  int opcion;
  int exit = 0;
  FILE *f;
     
  while (!exit)
  { 
   menu();
   printf("\nOpcion: ");
   scanf("%d", &opcion);
 
   switch(opcion)
   {
    case 1:
                 
                 system("cls");
     Alta(f);
    break;
    case 2:
                 system("cls");
   Baja();
   
         break;
    case 3:
                 system("cls");
           Modif();
    break;
    
             case 4:
                 system("cls");
      Consul(f);
    
           break;
    case 5:
     exit = 1;
    break;
    default:
                 system("cls");
    printf("\nopcion no valida");
   }
  }
 
  return 0;
}
 
void menu()
{
  printf("\nMenu:");
    printf("\n\t1. ALTAS");
  printf("\n\t2. BAJAS");
  printf("\n\t3. MODIFICACIONES");
     printf("\n\t4.CONSULTAS");
     printf("\n\t5.SALIR");
}
void Alta(FILE *f)
{
  f = fopen("fichero", "a+");
 
 if(f == NULL)
 {
  printf("\nFichero no existe! \nPor favor creelo");
  return;
 }
 printf("\nDigita la matricula: ");
 scanf("%d",&emp.Matricula);
 
    printf("\nDigita el nombre: ");
 scanf("%s", &emp.Nombre);
 
 
 printf("\nDigita el edad: ");
 scanf("%d", &emp.Edad);
 
 printf("\nDigita el peso: ");
 scanf("%f", &emp.Peso);
 
 printf("\nDigita la carrera: ");
 scanf("%s", &emp.Carrera);
 
 
 fwrite(&emp, sizeof(emp), 1, f);
 
 fclose(f);
 
 return;
}
 
void Consul(FILE *f)
{
 int numero = 1;
 
 f = fopen("fichero", "r");
 
 if(f == NULL)
 {
  printf("\nFichero no existe! \nPor favor creelo");
  return;
 }
 
 fread(&emp, sizeof(emp), 1,f);
  printf("\nNumero \tNombre \tMatricula \tEdad \tPeso \tCarrera");
 
 while(!feof(f))
 {
  printf("\n%d \t%s \t%d \t\t%d \t%.2f \t%s", numero, emp.Nombre,
  emp.Matricula, emp.Edad, emp.Peso,emp.Carrera);
  fread(&emp, sizeof(emp), 1, f);
  numero++;
 }
 fclose(f);
 
 return;
}
void Baja(){  
FILE *f1,*f2;  
   
 int codigoaux;  
 
 f1 = fopen("fichero","rb"); 
 f2 = fopen("fichero.dat","ab");  
  
  printf("Ingrese matricula\n");  
 scanf("%i",&codigoaux);  
  
  fread(&emp,sizeof(emp),1,f1);  
 
  while (!feof(f1)){ 
  if (emp.Matricula != codigoaux){  
  fseek(f2,0l,SEEK_END);  
  fwrite(&emp,sizeof(emp),1,f2);  
   }  
  fread(&emp,sizeof(emp),1,f1);  
   }  
   fclose(f1);  
  fclose(f2);  
    remove("fichero");  
   rename("fichero.dat","fichero");  
    }  
    
    void Modif()
    {  
    FILE *f1,*f2;  
  
   int Clave;  
   f1    = fopen("fichero","rb"); 
   f2= fopen("fichero.dat","ab"); 
   printf("Ingrese Clave\n");  
   scanf("%i",&Clave);  
    fread(&emp,sizeof(emp),1,f1);  
     while (!feof(f1)){ 
    if (emp.Matricula != Clave){   
    fseek(f2,0l,SEEK_END);  
    fwrite(&emp,sizeof(emp),1,f2); 
    }else{  
 
    printf("\nDigita el nombre: ");
 scanf("%s", &emp.Nombre);
 
 
 printf("\nDigita el edad: ");
 scanf("%d", &emp.Edad);
 
 printf("\nDigita el peso: ");
 scanf("%f", &emp.Peso);
 
 printf("\nDigita la carrera: ");
 scanf("%s", &emp.Carrera);
   
        fseek(f2,0l,SEEK_END);   
          fwrite(&emp,sizeof(emp),1,f2);   
        }      
              fread(&emp,sizeof(emp),1,f1);   
                      }     
        fclose(f1);  
        fclose(f2);  
        remove("fichero");     
        rename("fichero.dat","fichero");  
          }  
