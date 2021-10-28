#include <stdio.h>
#include <stdlib.h>
#include "input.h" // Hier binden wir die Bibliothek ein

int fibonacci(int n){ //the function gets an integer and returns the value at the corresponding postion of the fibonaccisequenz
  if (n <= 2){ //if the searched number is in the interval [1,2], return 1. Assuming the user passes a valid value ([1, infinity[)
    return 1;
  }
  else {
    return (fibonacci(n-1)+fibonacci(n-2)); //If the number is not in the interval [1,2], calculate the number through recursion and the definition of the fibonacci sequenz
  }
}

int main(){
    int n = lese_int(); // Hier rufen wir die Funktion lese_int auf.
    int f = fibonacci(n);
    printf("Fib(%d) = %d\n" , n, f);

    return 0; //Beende das Programm ohne Fehlermeldung
}
