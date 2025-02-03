#include <stdio.h>
#include <string.h>

typedef struct {
  int id;
  double gpa;
  char name[50];
} Student;

/*
struct Student{
  int id;
  double gpa;
  char name[50];
};
*/

int main(){
  //struct Student s; // Student s = new Student();
  Student s;
  s.id = 123134;
  s.gpa = 3.5;
  strcpy(s.name,"John"); 
  printf("%d\n",s.id);
  printf("%f\n",s.gpa);
  printf("%s\n",s.name);
  
  Student * ptr = &s;
  
  printf("---- %d ----\n",(*ptr).id);
  printf("---- %d ----\n", ptr->id);
  
  return 0;
}
