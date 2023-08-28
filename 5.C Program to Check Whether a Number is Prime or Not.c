#include <stdio.h>

int main()
{   /*
    To find a Prime number we can devide it by
    two if theres remainder 0 then its not prime
    but for two it can be derivable by 2 and remainder is 0
    but it is a prime number
    */
    int number,i=2;
    printf("Input a number to see if its prime or not:");
    scanf("%d",&number);
    while(i<number && i<=2){
    if(number==2)
    {
        printf("It is a prime number");
        break;
    }
    else if(number%2==0)
    {
        printf("It's not a prime number ");
        break;

    }
    else if (number%2!=0)
    {
        printf("It's a prime number");
        break;
    }
    else
    {
        printf("Wrong input");
        break;
    }
    }
    return 0;
}
