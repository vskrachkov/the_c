/*
 * Temperature converter program realized with named constants.
 */
# include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 30

int main() {
    int fahr;
    printf("Fahrenheit\tCelsius\n");
    for (fahr = 0; fahr <= 300; fahr += 30) {
        printf("%10d\t%7.2f\n", fahr, 5. * (fahr - 32) / 9);    
    }
    return 0;
}
