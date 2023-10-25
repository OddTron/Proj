#include <stdio.h>
#include <stdlib.h>

int main() {
    for(float f = 0.0; f <= 300.0; f+= 20.0){
        float c;
        c = 5.0*(f-32.0)/9.0;
        printf("%3.0f\t%3.2f\n", f, c);
        //printf ("This is farenheit: %d\t This is Celsius: %d\n", f, c);
    }
    return 0;
}