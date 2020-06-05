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

	int opc,opc2,opc3,num,i,x,N,NE,M,y;
	if((f=fopen("C:\Users\Jana\Desktop\Estructuras II\datos.dat","a"))==NULL){
		printf("Error de Apertura\n");
		exit(1);
	}
	if((f2=fopen("C:\Users\Jana\Desktop\Estructuras II\datos.dat","a"))==NULL){
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

		do{
				printf("***Menu***\n");
				printf("1)Bajas\n");
				printf("2)Cambios\n");
				printf("3)Consultas\n");
				printf("4)Indexar\n");
				printf("5)Salir\n");

				printf("Captura La Opcion\n");
				scanf("%d",&opc2);
				switch(opc2){
			case 1:
				printf("1)Opcion Bajas de Empleados\n");
				f=fopen("C:\Users\Jana\Desktop\Estructuras II\datos.dat","rb");
				f2=fopen("C:\Users\Jana\Desktop\Estructuras II\datos.aux","wb");
				printf("Introduce el numero del empleado que quieres dar de baja\n");
				scanf("%d",&y);
				i=0;
				//do{
				//	fread(&Emp,sizeof(Emp),1,f);
				//	if(Emp.Clave[y] != N)
				//		fwrite(&Emp,sizeof(Emp),1,f2);
				//	i=i+1;
				//}
				//while(!feof(f));
				//rename("datos.dat","datos.aux");
				//remove("C:\Users\Jana\Desktop\Estructuras II\datos.dat\n");
				
				for(i=1;i<=NE;i++){
				
					if(y==i){
						printf("Clave\tNombre\tDepto\tSueldo\t\tTiempo\tPuesto\n");
						printf("*%d",Emp.Clave[y]);
						printf("\t*%s",Emp.Nombre[y]);
						printf("\t*%d",Emp.Depto[y]);
						printf("\t*%f",Emp.Sueldo[y]);
						printf("\t*%d",Emp.Tiempo[y]);
						printf("\t*%s",Emp.Puesto[y]);
						printf("\n");
				}
					else{
						if(y!=i){
						printf("Clave\tNombre\tDepto\tSueldo\t\tTiempo\tPuesto\n");
						printf("%d",Emp.Clave[i]);
						printf("\t%s",Emp.Nombre[i]);
						printf("\t%d",Emp.Depto[i]);
						printf("\t%f",Emp.Sueldo[i]);
						printf("\t%d",Emp.Tiempo[i]);
						printf("\t%s",Emp.Puesto[i]);
					}
					}
					printf("\n");
				}


				fclose(f);
				fclose(f2);
				
			break;
			case 2:
				printf("2)Opcion Cambios\n");
				rename("datos.dat","datos.aux");
				remove("C:\Users\Jana\Desktop\Estructuras II\datos.dat");
				
				printf("Introduce la Clave del Empleado a Modificar\n");
				scanf("%d",&M);

				printf("Introduce la Clave de Departamento\n");
				scanf("%d",&Emp.Clave[M]);
				printf("\nIntroduce el Nombre\n");
				scanf(" %[^\n]",Emp.Nombre[M]);
                printf("\nIntroduce el Departamento\n");
                scanf("%d",&Emp.Depto[M]);
				printf("\nIntroduce el Sueldo\n");
				scanf("%fa",&Emp.Sueldo[M]);
                printf("\nIntroduce el Timpo de Antiguedad \n");
				scanf("%d",&Emp.Tiempo[M]);
				printf("Introduce El puesto Del Empleado\n");
				scanf(" %[^\n]",Emp.Puesto[M]);
				
				printf("Presentacion de Cambios\n");
				printf("Clave\tNombre\tDepto\tSueldo\tTiempo\tPuesto\n");
				for(i=1;i<=NE;i++){
					if(M==i){
						printf("%d",Emp.Clave[M]);
						printf("\t%s",Emp.Nombre[M]);
						printf("\t%d",Emp.Depto[M]);
						printf("\t%f",Emp.Sueldo[M]);
						printf("\t%d",Emp.Tiempo[M]);
						printf("\t%s",Emp.Puesto[M]);
						printf("\n");
					}
					else{
						printf("%d",Emp.Clave[i]);
						printf("\t%s",Emp.Nombre[i]);
						printf("\t%d",Emp.Depto[i]);
						printf("\t%f",Emp.Sueldo[i]);
						printf("\t%d",Emp.Tiempo[i]);
						printf("\t%s",Emp.Puesto[i]);
						printf("\n");
					}
				}a


				fwrite(&Emp,sizeof(Emp),1,f);
				fwrite(&Indice,sizeof(Indice),1,f);
				break;
			case 3:
				printf("Opcion Consultas\n");
				printf("Clave\tNombre\tDepto\t\Sueldo\t\tTiempo\tPuesto\n");
				for(i=1;i<=NE;i++){
				printf("%d\t",Emp.Clave[i]);
				printf("%s\t",Emp.Nombre[i]);
				printf("%d\t",Emp.Depto[i]);
				printf("%f\t",Emp.Sueldo[i]);
				printf("%d\t",Emp.Tiempo[i]);
                printf("%s\t",Emp.Puesto[i]);
				printf("\n");
				}
				printf("\n");
			break;
			case 4:
				printf("Opcion Indexar");
			break;
			case 5:
				printf("OPCION SALIR...\n");
			break;
			default:
				printf("La Opcion no Corresponde\n");
			break;
		} //Sierre switch opc2
		} //Sierre de Do
			while(opc!=5);
			fclose(f);
			getch();
		}//Sierre de Main