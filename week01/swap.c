#include <stdio.h>

int swap(int * a, int * b){
  int t = *a;
  *a = *b;
  *b = t;
}


int main(){
  int x = 5;
  int y = 7;
  printf("before %d %d\n",x,y);
  swap(&x,&y);  
  printf("after %d %d\n",x,y);
}
