#include <stdio.h>
int main(){

	float length,breadth,area,perimeter;
	//input
	{
	    printf("Input Length:");
	    scanf("%f",&length);
	    printf("\n");
	    printf("Input Breadth:");
	    scanf("%f",&breadth);
	    printf("\n");
	}
	//Calculation using equation
	{
	    area=length*breadth;
	    perimeter=2*(length+breadth);
	}
	//Output

	printf("Area is:%.2f\n",area);
	printf("Perimeter is:%.2f\n",perimeter);

	return 0;
}
