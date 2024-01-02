#include<stdio.h>
int main(){
    int number,count = 0;
    printf("Input to find either it's prime or not > ");
    scanf("%d",&number);
    if(number == 1 || number == 0){
        printf("Not a Prime number");
        count++;
    }
    else if(number == 2){
        printf("It's a Prime number");
        count++;
    }
    else
    {
        for(int i = 2;i<number;i++){
           if (number % i == 0){
                printf("Not a Prime number");
                count++;
                break;
           }
        }
    }

    if(count==0){
       printf("It's a Prime number");
    }
}
