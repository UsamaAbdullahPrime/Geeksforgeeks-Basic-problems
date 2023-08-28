#include <stdio.h>
int main(){
    int number=1,input,i=0;
    {
        printf("Input Integer %d:",number);
        scanf("%d",&input);
    }
    while(i<input)
    {
        {
        if(number==2)
    {
        printf("%d is a prime number\n",number);
    }
    else if(number%2==0)
    {
        printf("%d is not a prime number \n",number);

    }
    else if (number%2!=0)
    {
        printf("%d is a prime number\n",number);
    }
        }
        number++;
        i++;
    }
    printf("\n");
    return 0;
}

