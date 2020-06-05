#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
	struct Emp{
		int Clave[5];
		char Nombre[40][5];
		int Depto[5];
		float Sueldo[5];
		int Tiempo[5];
		char Puesto[40][5];

	};
	struct Indice{
		int Clave;
		int Posicion;
	};

	int main(){
	FILE *f;
	FILE *f2;
	struct Emp Emp;
	struct Indice Indice;

	int opc,opc2,opc3,num,i,x,N,NE,M,y,j,temp;
	if((f=fopen("C:\Users\Jana\Desktop\Estructuras II\datos2.dat","a"))==NULL){
		printf("Error de Apertura\n");
		exit(1);
	}
	if((f2=fopen("C:\Users\Jana\Desktop\Estructuras II\datos2.dat","a"))==NULL){
		printf("Error de Apertura\n");
		exit(1);
	}
	printf("Captura el Numero de Empleados\n");
	scanf("%d",&NE);
	i=1;
	do{
		 
		printf("Captura de Datos\n");
		printf("Introduce la Clave Del Empleado\n");
		scanf("%d",&Emp.Clave[i]);
		printf("\nIntroduce el Nombre Del Empleado \n");
		scanf(" %[^\n]",Emp.Nombre[i]);
		printf("\nIntroduce el Departamento Del Empleado\n");
		scanf("%d",&Emp.Depto[i]);
        printf("\nIntroduce el Sueldo Del Empleado\n");
		scanf("%f",&Emp.Sueldo[i]);
		printf("\nIntroduce La Antiguedad\n");
		scanf("%d",&Emp.Tiempo[i]);
		printf("\nIntroduce El puesto Del Empleado\n");
		scanf(" %[^\n]",Emp.Puesto[i]);

		printf("\n\n");
	i=i+1;
	}
	while(i<=NE);
		


		fwrite(&Emp,sizeof(Emp),1,f);
		fwrite(&Indice,sizeof(Indice),1,f2);

				f=fopen("C:\Users\Jana\Desktop\Estructuras II\datos2.dat","rb");
				f2=fopen("C:\Users\Jana\Desktop\Estructuras II\datos2.aux","wb");
				for(i=1;i<NE;i++){
				temp=Clave[i];
				j=i-1;
				if((Clave[i]>temp)&&(j>=0))
					Clave[j+1]=Clave[i];
					j--;
				j+1==temp;
				}

				fclose(f);
				fclose(f2);
				getch();
	}
			