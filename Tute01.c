#include <stdio.h>

int main() {
	int mark1, mark2;
	float avg;
	
	printf("Input marks for subject 1 :");
	scanf("%d", &mark1);
	
	printf("Input marks for subject 2 :");
	scanf("%d", &mark2);
	
	avg=(mark1 + mark2 )/2;
	printf("Average is %.2f ",avg);
  
  return 0;
}
