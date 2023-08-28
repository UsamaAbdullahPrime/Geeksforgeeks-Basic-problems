#include <stdio.h>
#include <math.h>
int main(){
    //program for compund interest
    float ammount2,principal_ammount,time,interest_rate,ammount=0,ammount1=1;
	int i=1;
	{   //taking inputs
	    printf("Input Principal Ammount:");
	    scanf("%f",&principal_ammount);
	    printf("\n");
	    printf("Input Interest Rate:");
	    scanf("%f",&interest_rate);
	    printf("\n");
	    printf("Input Time:");
	    scanf("%f",&time);
	    printf("\n");
	}
	// Calculate compound interest with the equation
	ammount=1+(interest_rate/100);
    //using while loop to use as power
	while(i<=time){
        ammount1=ammount*ammount1;
        i++;

	}

	ammount2=ammount1*principal_ammount;
	//ammount=principal_ammount*(pow((1+interest_rate) / 100),time);
	printf("Compound Interest= %.2f\n",ammount2-principal_ammount);

	return 0;
}
