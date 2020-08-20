#include <stdio.h>
#include <stdlib.h>
int main(){
    int suma = 0;
    for (int i = 3; i < 1000; i++)  //necesito analizar todos los numeros naturales desde el 3 hasta el 999
        if (i%3 == 0 || i%5 == 0)   //tengo que ver si son multiplos de 3 o de 5
            suma += i;
    printf("%i", suma);
    return 0;
}

/*
10 lines including the last bracket

#include <stdio.h>
#include <stdlib.h>
int main(){
    int sum = 0;
    for (int i = 3; i < 1000; i++)  //got to analyze every natural number from 3 to 999
        if (i%3 == 0 || i%5 == 0)   //check if it's multiple of 3 or 5
            suma += i;
    printf("%i", sum);
    return 0;
}
*/