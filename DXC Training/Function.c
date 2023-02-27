#include<stdio.h>

int add(int a,int b){
    int c=a+b;
    
    return c;
}
 void main(){
    int a=10;
    int b=20;
   int sum=add(&a,&b);
   printf("sum of given numbers : %d",sum);
    add(200,300);
    add(100,200);
 }