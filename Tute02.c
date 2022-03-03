#include <stdio.h>

int main() {
	float distance;
	float rate1, rate2;
	float amount;
	
	printf("Input distance traveled :");
	scanf("%f", &distance);
	
	if (distance <= 30.0 )
	{
		rate1 = 50.00;
		amount = rate1 * distance;
	}
	else (distance > 30.0 );
	{
		rate1 = 50.00;
		rate2 = 40.00;
		amount = (rate1 * 30.0) + (rate2 * (distance-30.0));
	}
	printf("Amount : %.2f", amount);
   	return 0;
}
