#include <stdio.h>

int main(){ 
  int x;
  while(scanf("%d", &x)==1){ // while(in.hasNextInt()) { x=in.nextInt(); ...
     printf("%d\n",x); // System.out.println(x);
  }
  return 0;
}
