#include <stdio.h>
int main() {
	int n;
	int i;
	int sum;
	printf ("Input a number for n :");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
    {
        sum += i;
    }
	printf("Sum : %d", sum-1);
  
  return 0;
}
