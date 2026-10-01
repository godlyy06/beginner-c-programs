#include <stdio.h>

int main() {

    float input_cel;

    printf("Please enter a temperature (in °C): ");
    scanf(" %f", &input_cel); 
    printf("You entered: %.2f\n", input_cel);

    float output_far = input_cel * 9/5 + 32;

    printf("The temperature in Fahrenheit is: %.2f°F\n", output_far);
    
    return 0;
}