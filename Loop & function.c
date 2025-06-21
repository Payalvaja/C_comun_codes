#include<stdio.h>
void myfunction(int  mynumber[3]){
for(int i=0;i<5;i++){
printf("%d\n",mynumber[i]);
}
}
int main (){
int mynumbers[5]={10,20,30,40,50};
myfunction(mynumbers);
return 0;
}
