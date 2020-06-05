#include <cstdlib>
#include <iostream>
struct nodo
{
int dato;
nodo*der,*izq;
};
struct nodo*aux1,*inicio,*aux2,*aux3,*aux4,*aux5,*aux6,*aux7,*aux8,*aux9,*aux10,*aux11;
void preorden (struct nodo*ap)
{if(ap!=NULL)
   {printf("%d\n ",ap->dato);
   preorden(ap->izq);
   preorden(ap->der);
   }
}
void enorden (struct nodo*ap)
{if(ap!=NULL)
   {
   enorden(ap->izq);          
   printf("\t\t%d\n ",ap->dato);
   enorden(ap->der);
   }
}
void posorden (struct nodo*ap)
{if(ap!=NULL)
   {
   posorden(ap->izq);          
   posorden(ap->der);
   printf("\t\t\t%d\n ",ap->dato);
   
   }
}
int main()
{
aux1=(struct nodo*)malloc(sizeof(struct nodo));
aux1->dato=100;
aux2=(struct nodo*)malloc(sizeof(struct nodo));
aux2->dato=50;
aux3=(struct nodo*)malloc(sizeof(struct nodo));
aux3->dato=150;
aux4=(struct nodo*)malloc(sizeof(struct nodo));
aux4->dato=25;
aux5=(struct nodo*)malloc(sizeof(struct nodo));
aux5->dato=75;
aux6=(struct nodo*)malloc(sizeof(struct nodo));
aux6->dato=125;
aux7=(struct nodo*)malloc(sizeof(struct nodo));
aux7->dato=175;
aux8=(struct nodo*)malloc(sizeof(struct nodo));
aux8->dato=10;
aux9=(struct nodo*)malloc(sizeof(struct nodo));
aux9->dato=30;
aux10=(struct nodo*)malloc(sizeof(struct nodo));
aux10->dato=60;
aux11=(struct nodo*)malloc(sizeof(struct nodo));
aux11->dato=80;
aux1->izq=aux2;
aux1->der=aux3;
aux2->izq=aux4;
aux2->der=aux5;
aux3->izq=aux6;
aux6->izq=NULL;
aux6->der=NULL;
aux3->der=aux7;
aux7->izq=NULL;
aux7->der=NULL;
aux4->izq=aux8;
aux8->izq=NULL;
aux8->der=NULL;
aux4->der=aux9;
aux9->izq=NULL;
aux9->der=NULL;
aux5->izq=aux10;
aux10->izq=NULL;
aux10->der=NULL;
aux5->der=aux11;
aux11->izq=NULL;
aux11->der=NULL;
preorden(aux1);
enorden(aux1);
posorden(aux1);
getchar();
return 0;
}