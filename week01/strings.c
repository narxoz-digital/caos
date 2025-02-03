#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
  char h[] = "hello world"; // null-terminated strings, c-strings  
  char* g = "good\0bye";
  
  printf("%s %ld\n",h,strlen(h));
  printf("%s %ld\n",g,strlen(g));
  printf("%s %ld\n",g+5,strlen(g+5));
  return 0;
}
