#include<stdio.h>
int main()
{
int i,j,k;
int p =5;
for (i=1; i<=p; i++)
{
for (k=p-1;k>=i;k--)
{
printf (" ");
}
for (j=1;j<=i; j++)
{
printf("* ");
}
printf ("\n");
}
return 0;
}
