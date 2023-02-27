#include <stdio.h>

void main(){
    //name ,place, roll,age,marks
    char names[10][20];
    char place[10][20];
    int roll[10];
    float marks[10];
    for(int i=0;i<4;i++){
        printf("enter student name,roll,place,marks\n");
        scanf("%s %d %s %f",names[i],&roll[i],place[i],&marks[i]);
    }
    printf("second student details\n");
    printf("Student details name : %s\nRoll :%d\nplace :%s\nmarks : %f",names[1],roll[1],place[1],marks[1]);
}