#include <stdio.h>
int main(){
	float x,y,product=0;
	{
	    printf("Input Two Float Number:");
	    scanf("%f%f",&x,&y);
	}
	//multiplication of A and B
	product=x*y;
	// Print the product
	printf("Product of x and y is: %.2f", product);

	return 0;
}
