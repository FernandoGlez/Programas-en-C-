#include <stdio.h>
#include <stdlib.h>
char a=0,b=0,c=0,d=0,e=0,F=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,X=0,Y=0,y=0,z=0;
FILE *f;

int main(){
    
f=fopen("Mis documentos\abc.txt","w");
for(X=0;X<10;X++)
{
                for(Y=0;Y<10;Y++)
                {
                                putc(c,f);
                                }
                                putc('\n',f);
                                }
                                fclose(f);
                                f=fopen("Mis documentos\abc.txt","r");
                                do
                                {
                                c=getc(f);
                                printf("%c",a,b,c,d,e,F,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z);
                               
                               
                               if(a
                                }while(c!=EOF);
                                
                                getchar();
                                getchar();
                                return 0;
                                }
