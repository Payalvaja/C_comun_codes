#include<stdio.h>
#include<conio.h>
void main(){
int i,odd=0,even=0;
clrscr();
for(i=0;i<100;i++){
if(i%2==0)
even=even+i;
else
odd=odd+i;
}
printf("%d %d",even,odd);
getch();
}
