#include <stdio.h>
int main(){

	float principal_ammount,time,interest_rate,simple_interest=0;
	{
	    printf("Input Principal Ammount:");
	    scanf("%f",&principal_ammount);
	    printf("\n");
	    printf("Input Time:");
	    scanf("%f",&time);
	    printf("\n");
	    printf("Input Interest Rate:");
	    scanf("%f",&interest_rate);
	    printf("\n");
	}
	// Calculate simple interest
	simple_interest=(principal_ammount*time*interest_rate) / 100;

	printf("Simple Interest= %.2f\n",simple_interest);

	return 0;
}
