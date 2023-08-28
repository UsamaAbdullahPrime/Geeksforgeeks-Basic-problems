#include<stdio.h>
int main(){
    int real_1,real_2,immaginary1,immaginary2,sum1=0,sum2=0;
    {
        printf("Input 1st (Real number & imaginary number):");
        scanf("%d%d",&real_1,&immaginary1);
    }
    {
        printf("Input 2nd (Real number & imaginary number):");
        scanf("%d%d",&real_2,&immaginary2);
    }
    {
        sum1=real_1+real_2;
        sum2=immaginary1+immaginary2;
    }
    {
        printf("First complex Number is:(%d+%di) \n",real_1,immaginary1);
        printf("Second complex Number is:(%d+%di) \n",real_2,immaginary2);
    }

    printf("Sum of Two complex Number is:(%d+%di) \n",sum1,sum2);

    return 0;
}


