#include<stdio.h>

void main(){
    char ch;
    printf("enter the char\n");
    scanf("%c",&ch);
    int value=ch;
    if((value>=65 && value<=90)||(value>=97 && value<=122)){
        printf("This char is Alphabet\n")''
    }
    else{
        printf("this is not an Alphabet\n");
    }

}