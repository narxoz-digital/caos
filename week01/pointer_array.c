#include <stdio.h>

int main(){
  int a[] = {11,12,13,14,15};
  //int* b = &(a[0]);
  int* b = a;
  // array is a constant pointer
  b = a+2;
  // a = a+2; // error
  
  //printf("%d\n",a[0]);   // 11
  //printf("%d\n",*b);     // 11
  //printf("%d\n",*(b+1)); // a[1]=12
  //printf("%d\n",*a);     // 11
  
  
  for(int i=0;i<3;i++){    // pointer arithmetics is under the hood of [] brackets
    printf("%d\n",*(b+i)); // a[i] = *(a+i) = *(i+a) = i[a]
  }
  
  return 0;
}


// assembler heritage:
// in assembler a[5] means offset 5 bytes from address pointed by a 

