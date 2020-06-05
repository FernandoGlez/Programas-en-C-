#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *F;
    char cadena[40];
   
                  
                 F=fopen("C:\\omar.txt","r");
                 do
                 {
                         fgets(cadena,40,F);
                         puts(cadena);
                                             }
                 while(!feof(F));
                 
    

    
    getchar();
    return 0;
}
