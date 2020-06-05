#include<stdio.h>
#include<conio.h>
double determinante;
  int i, j;

 void det(float mat[3][3]); 
 main()
 {
 
   
int i=0,j=0,aux=0,d=0,n;
int mat[10][10];


printf("Dame el tamano de la matriz: ""\n");
scanf("%d", &n);

for(i = 0; i < n; i++){
for(j = 0; j < n; j++){
printf( "Matriz[%d][%d]: ", i, j );
scanf( "%d", &mat[i][j] );
}
} 
  printf("\n");
  determinante = mat[0][0]*mat[1][1]*mat[2][2];
  determinante += mat[0][1]*mat[1][2]*mat[2][0];
  determinante += mat[1][0]*mat[2][1]*mat[0][2];
  determinante -= mat[0][2]*mat[1][1]*mat[2][0];
  determinante -= mat[0][1]*mat[1][0]*mat[2][2];
  determinante -= mat[0][0]*mat[2][1]*mat[1][2];
  printf("La matriz introducida es:\n");
  for (i=0; i<3; i++) {
     for (j=0; j<3; j++)
     printf("%d", mat[i][j]);
     printf("\n");
  }
  printf("\nY su determinante es: %12.4lf\n", determinante);
  getchar();
  getchar();
  return 0;
}

/*
for(i = 0; i < n; i++){
printf("\n");
for(j = 0; j < n; j++){
printf("%d ", mat[i][j]);

}
}
printf("\n\n");

if(d==0){
printf( "Es matriz Dominante.\n");
}

else{ 
printf( "No es matriz Dominante.\n");
}
getch();
_flushall();
*/


