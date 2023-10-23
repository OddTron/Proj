#include <stdio.h>
#include <stdlib.h>

int main() {
    for(int f = 0; f <= 300; f+= 20){
        int c;
        c = 5*(f-32)/9;

        printf("%d\t%d\n", f, c);
    }
    return 0;
}