#include <stdio.h>

int main(){
  // Student s = new Student();
  // s reference ----> {"Bob",123, 4.0}
  // pointer = a variable that stores the address of another variable
  
  int x = 5; // x : 5, e.g. x is at 0x7ffd275e142c        
  int* p = &x; // p: 0x7ffd275e142c
  
  *p = 7;
  
  printf(" x = %d\n",x);
  printf("&x = %p\n",&x);
  printf(" p = %p\n",p);
  printf("*p = %d\n",*p); // de-referencing
  
  // pointer arithmetics
  printf("p+1 = %p\n",p+1); // +1*(sizeof int)
  
  return 0;
}
