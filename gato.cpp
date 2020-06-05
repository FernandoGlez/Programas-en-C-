#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main ()
{
int i=1,bol,turn,gan,in;
char pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,pos9,fig;

i=bol=turn=gan=0;
pos1=pos2=pos3=pos4=pos5=pos6=pos7=pos8=pos9=' ';
fig='x';
while (gan==0&&i<=9){
i++;
printf(" %c | %c | %c\n",pos1,pos2,pos3);
printf("---------------\n\n");
printf(" %c | %c | %c\n",pos4,pos5,pos6);
printf("---------------\n\n");
printf(" %c | %c | %c\n",pos7,pos8,pos9);
printf("Turno de jugador %c\n",fig);
printf("Escribe la posicion a jugar");

flushall();

while(bol==0){
scanf("%d",&in);
switch (in){
case 1:
if(pos1==' ')
{
pos1=fig;
bol=1;
}
else
{
printf("Posicion ocupada intenta de nuevo");
}
break;
case 2:
if(pos2==' ')
{
pos2=fig;
bol=1;
}
else
{
printf("Posicion ocupada intenta de nuevo");
}
break;
case 3:
if(pos3==' ')
{
pos3=fig;
bol=1;
}
else
{
printf("Posicion ocupada intenta de nuevo");
}
break;
case 4:
if(pos4==' ')
 
 
{
pos4=fig;
bol=1;
}
else
{
printf("Posicion ocupada intenta de nuevo");
}
break;
case 5:
if(pos5==' ')
{
pos5=fig;
bol=1;
}
else
{
printf("Posicion ocupada intenta de nuevo");
}
break;
case 6:
if(pos6==' ')
{
pos6=fig;
bol=1;
}
else
{
printf("Posicion ocupada intenta de nuevo");
}
break;
case 7:
if(pos7==' ')
{
pos7=fig;
bol=1;
}
else
{
printf("Posicion ocupada intenta de nuevo");
}
break;
case 8:
if(pos8==' ')
{
pos8=fig;
bol=1;
}
else
{
printf("Posicion ocupada intenta de nuevo");
}
break;
case 9:
if(pos9==' ')
{
pos9=fig;
bol=1;
}
else
{
printf("Posicion ocupada intenta de nuevo");
}
break;
}
}
bol=0;
if (fig=='x')
{
fig='o';
}
else
{
fig='x';
}
if(pos1!=' '&&pos1==pos2&&pos1==pos3)
{
gan=1;
}
if(pos4!=' '&&pos4==pos5&&pos4==pos6)
{
gan=1;
}
if(pos7!=' '&&pos7==pos8&&pos7==pos9)
{
gan=1;
}
if(pos1!=' '&&pos1==pos5&&pos1==pos9)
{
gan=1;
}
if(pos3!=' '&&pos3==pos5&&pos3==pos7)
{
gan=1;
}
if(pos9!=' '&&pos9==pos6&&pos9==pos3)
{
gan=1;
}
if(pos7!=' '&&pos7==pos4&&pos7==pos1)
{
gan=1;
}
if(pos2!=' '&&pos2==pos5&&pos2==pos8)
{
gan=1;
}
if(pos3!=' '&&pos3==pos6&&pos3==pos9)
{
gan=1;
}
}
printf(" %c | %c | %c\n",pos1,pos2,pos3);
printf("---------------\n");
printf(" %c | %c | %c\n",pos4,pos5,pos6);
printf("---------------\n");
printf(" %c | %c | %c\n",pos7,pos8,pos9);
if(i==10&&gan==0)
{
printf("Es un empate");
}
else
{
if(fig=='x')
printf("El Ganador es el o");
else
printf("El Ganador es el x");
}
flushall();//
getch();
}
