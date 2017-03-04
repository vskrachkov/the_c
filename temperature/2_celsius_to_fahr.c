/*
 * Temperature converter from Celsius to Fahrenheit.
 */

 #include <stdio.h>

 int main() {
    float celsius, fahr;
    int low, upper, step;

    low = 0;
    upper = 300;
    step = 30;

    celsius = low;
    printf("Celsius\tFahrenheit\n");
    while (celsius <= upper) {
        fahr = (9 * celsius / 5) + 32;
        printf("%7.1f\t%10.1f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}
