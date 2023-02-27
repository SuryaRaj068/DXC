#include <stdio.h>
int count =0,size=10;
struct student{
    char name[20];
    char place[20];
    int roll;
    float marks;
};
struct studentDetails{
    struct student list[10];
}list;
void main(){
  struct student std1,std2;
  strcpy(std1.name,"manoj");
  strcpy(std1.place,"delhi");
  std1.roll=34;
  std1.marks=350.0;
  list.list[0]=std1;
  printf("%d\n",list.list[0].roll);
  printf("Student details name : %s\nRoll :%d\nplace :%s\nmarks : %f",std1.name,std1.roll,std1.place,std1.marks);
    
    
}

void addStudent(){
    //create new variable for student struct
    struct student std1,std2;
    if(count<size){
  strcpy(std1.name,"manoj");
  strcpy(std1.place,"delhi");
  std1.roll=34;
  std1.marks=350.0;
  list.list[count]=std1;
  count=count+1;
    }
}