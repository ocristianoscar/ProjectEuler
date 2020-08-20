#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fiboUno = 0; int fiboDos = 1; int nextFibo = 0; int sum = 0;
    while (nextFibo < 4000000)
    {
       nextFibo = fiboUno + fiboDos;
        if (nextFibo%2 == 0)
            sum += nextFibo;
        fiboUno = fiboDos;
        fiboDos = nextFibo;
    }
    printf("%i\n", sum);
    return 0;
}

//necesito siempre los ultimos dos de la secuencia para sumar el nuevo
    //si es menor a 4 millones, me fijo si es par o impar
    //si no, termino el programa
    //la secuencia fibo empieza con 0,1,1,2,3,5,8,13,21, etc

 //printf("%i\n", sum);
        //printf("%i\n", nextFibo);

