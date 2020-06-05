#include <stdio.h>
#include <stdlib.h>

struct registro
{
       int valor;
       struct registro *sig;
       };
       
       typedef struct registro _nodo;
       
_nodo*crearlista(_nodo*apuntador)
       {
        return(apuntador = NULL);
        }
_nodo *insertarEnlista(int numero, _nodo*apuntador)
 {
_nodo*registroNuevo, *apuntadorAuxiliar;

  registroNuevo =(_nodo*) malloc(sizeof(_nodo));                      
     
     if(registroNuevo !=NULL)
     {
     registroNuevo->valor = numero;   
     registroNuevo->sig = NULL;
     
     if(apuntador == NULL)
     apuntador =registroNuevo;
     else
     {
         apuntadorAuxiliar = apuntador;
         
         while(apuntadorAuxiliar->sig !=NULL)
         apuntadorAuxiliar = apuntadorAuxiliar->sig;
         
         apuntadorAuxiliar->sig = registroNuevo;
         return apuntador;
     }                  
     
}
 
 
 void imprimirLista(_nodo*apuntador)
 {
      
_nodo*apuntadorAuxiliar;
apuntadorAuxiliar = apuntador;

 while(apuntadorAuxiliar !=NULL)
 {
  printf("%d->",apuntadorAuxiliar->valor);
  apuntadorAuxiliar = apuntadorAuxiliar->sig;
  }
  printf("NULL\n");
  
  return;
}


    int main()
{
_nodo*iniciaLista;
iniciaLista = crearLista(iniciaLista);

iniciaLista = insertarEnLista(5, iniciaLista);
iniciaLista = insertarEnLista(7, iniciaLista);
iniciaLista = insertarEnLista(2, iniciaLista);
iniciaLista = insertarEnLista(1, iniciaLista);
imprimirLista(iniciaLista);
 int funcion,apilar,desapilar,vertop,verpila,vaciar,tope;
int x;
return EXIT_SUCCESS;
}

                 printf("QUE DESEA hacer:""\n");
                 printf("\n""\n""\n""\n");
                 printf("1)  APILAR""\n");
                 printf("2)  DESAPILAR""\n");
                 printf("3)  VER TOPE""\n");
                 printf("4)  VER PILA""\n");
                 printf("5)  VACIAR PILA""\n");
                 scanf("%d",&funcion);
     
     
 if (funcion==1)
 {
            
           printf("DAME 8 NUMEROS?""\n");
            
           scanf("%d",&apilar);
  }
 if (funcion==2)
 {
          printf("DESAPILAR""\n");
             for (int x=0;x<=4;x--)
          scanf("%f",&desapilar);
}         
 if (funcion==3)
 {
         printf("VER TOPE""\n");
         scanf("%f",&vertop);
         
 }
 if (funcion==4)
 {
        printf("VER PILA?""\n");
        scanf("%f",&verpila);
       
 }
 if (funcion==5)
 {
        printf("VACIAR PILA""\n");
        scanf("%f",&vaciar);
     
 }
 
 _flushall(); 
  getchar();
  }


