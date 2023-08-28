#include <stdio.h>
int main(){
    int number=1,input,sum=0,i=0;
    while(i<2)
    {
        printf("Input Integer %d:",++number);
        scanf("%d",&input);
        sum=sum+input;
        //number++;
        i++;
    }
    printf("The sum Is:%d",sum);
    return 0;
}
