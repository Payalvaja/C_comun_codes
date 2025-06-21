#include<stdio.h>
int main() {
int year;
printf ("enter year");
scanf ("%d", & year);
if (year  == 0) {
printf ("%d is a leap year:", year);
}
else {
printf ("%d is a not leap year", year);
}
return 0;
}
