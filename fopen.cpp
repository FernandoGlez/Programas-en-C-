#include <cstdlib>
#include <iostream>
char c;
FILE *f;
int a,b;
int main(){
f=fopen("texto.txt","w");
printf("dame un caracter\n");
scanf("%c",&c);
for(a=0;a<10;a++)
{
                for(b=0;b<10;b++)
                {
                                putc(c,f);
                                }
                                putc('\n',f);
                                }
                                fclose(f);
                                f=fopen("texto.txt","r");
                                do
                                {
                                c=getc(f);
                                printf("%c",c);
                                }while(c!=EOF);
                                getchar();
                                getchar();
                                return 0;
                                }