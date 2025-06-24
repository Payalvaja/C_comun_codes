#include<stdio.h>
int main(){
int value1;
int value2;
printf("Enter  value1");
scanf("%d",& value1);
printf("Enter value2");
scanf ("%d", &value2);
if(value1 <value2){
printf("value1 is less than to value2\n");
}
else if (value1>value2){
printf("value1 is great than to value2\n");
}
else{
printf("1 is true 0 is false");
}
return 0;


}
