#include<stdio.h>
int main(){
int i,n;
int t1=1;
int t2=2;
int next =t1+ t2;
printf ("enter the number of terms");
scanf ("%d", & n);
printf (" number %d,%d",t1,t2);
for (i = 3; i <= n; ++i) {
printf ("%d", next);
t1=t2;
t2=next;
next=t1+ t2;
}
return 0;
}
