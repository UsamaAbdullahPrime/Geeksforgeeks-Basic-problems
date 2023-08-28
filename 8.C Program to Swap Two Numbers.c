#include<stdio.h>
int main(){
    int X,Y;//this are two number that need to swap
    {
        printf("Inut Two number to swap:");
        scanf("%d%d",&X,&Y);
    }
    {
        //suppose X=5,Y=6
        X=X+Y;//X=X+Y=5+6=11,X=11
        Y=X-Y;//Y=X-Y=11-6=5,Y=5
        X=X-Y;//X=X-Y=11-5=6,X=6

    }
    printf("Numbers after swap:(%d,%d) \n",X,Y);

    return 0;
}

