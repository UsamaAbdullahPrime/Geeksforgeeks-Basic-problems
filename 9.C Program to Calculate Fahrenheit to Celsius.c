#include <stdio.h>
#include <math.h>
int main(){
    float celsius,farenheight;
    //taking input in celsius
    printf("Enter tempreture in celsius:");
    scanf("%f",&celsius);
    /*converting celsius to farenheight by this equation
    °F = °C × (9/5) + 32 and simplyfiying this equation
    we get (((9*celsius)+160)/5)
    */
    farenheight=(((9*celsius)+160)/5);
    printf("the temperature in farenheight is :%.3f",farenheight);
    return 0;
}
