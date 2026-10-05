//Temperature Converter: Take a temperature in Celsius as a float or double, convert it to Fahrenheit

#include <stdio.h>

int main() {
    float celsius,fahernheit;
    printf("Enter Temperature in Celsius : ");
    scanf("%f",&celsius);
    fahernheit = (celsius*9/5)+32;
    printf("Temperature in Fahrnheit : %.2f",fahernheit);
    return 0;
}