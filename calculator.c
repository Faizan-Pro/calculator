#include<stdio.h>
int main()
{
//date :- 15 September 2024
float a,b,d;
char op[10];
printf("*************\n");
printf("CREATED  BY\n");
printf("F A I Z A N\n");
printf("*************\n\n\n");
    
printf("enter a : ");
scanf("%f",&a);
printf("enter b : ");
scanf("%f",&b);
printf("enter operation (sum,sub,mul,div) : ");
scanf("%s",&op);
if(strcmp(op,"sum") == 0){
d = a+b;
} else if(strcmp(op,"sub") == 0){
d = a-b;
} else 
if(strcmp(op,"mul") == 0){
d =a*b;
} else 
if(strcmp(op,"div") == 0){
if(b !=0){
d = a/b; 
}else{
printf("can't devide by 0");
}}
printf("result:%f",d);
return 0;
}
