#include<stdio.h>



int main(){

int s1,s2,s3,s4,s5,s6;
printf("write source value\n:");
scanf("%d%d",&s1,&s2);
printf("value of s2:%d \n",s2);
printf("value of s1:%d\n",s1);
 if((s2==0)&&(s1==0)){

  printf("--------------------------\n");  
    printf("|s1 \t s2 \t output|\n");
    printf("|0 \t 0 \t I0    |\n");
  printf("--------------------------\n");  

 }
 else if((s2==0)&&(s1==1)){
  printf("-------------------------\n");    
    printf("|s1 \t s2 \t output|\n");
    printf("|0 \t 1 \t I1    |\n");
  printf("-------------------------\n");    
 }
 else if((s2==1)&&(s1==0)){
   printf("-------------------------\n");
    printf("|s1 \t s2 \t output|\n");
    printf("|1 \t 0 \t I2    |   \n");
   printf("-------------------------\n");  
 }
 else if((s2==1)&&(s1==1)){
   printf("-------------------------\n");  
    printf("|s1 \t s2 \t output|\n");
    printf("|1 \t 1 \t I3    |\n");
   printf("-------------------------\n");   
 }else{
    printf("write the correct value in binary:");
 }

    return 0;
  }