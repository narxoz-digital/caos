#include <stdio.h>
int main(){
	// int [] a = new int[n]; // 0,0,0,0,0
	int a[5] = {1,2,3,4,5};
	for(int i=0;i<5;i++)
	  printf("%d ",a[i]);
	printf("\n");	
	
	
	char s[] = "hello\0world"; // null-terminated string, c-string 
	for(int i=0;i<12;i++)
		printf("s[%d] = %c %d\n",i,s[i],s[i]);
	printf("s = %s\n",s);
	return 0;
}
