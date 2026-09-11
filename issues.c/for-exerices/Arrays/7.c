#include<stdio.h>
double celsius_to_fahrenheit(int cel){
return cel*(9.0/5.0)+32.0;
}
int main(void){
    int cel;
    printf("Enter temperature in Celsius: ");
    scanf("%d",&cel);
    double fahrenheit=celsius_to_fahrenheit(cel);
    printf("Temperature in Fahrenheit: %.2f\n",fahrenheit);
    return 0;
}
