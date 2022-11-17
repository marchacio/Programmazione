#include <iostream>

/*
Scrivere una funzione con un parametro n di tipo intero che stampa un rombo di asterischi che sulla diagonale ha 2*n+1
caratteri. Ad esempio, dato 8 stampa
*
*
che sulla diagonale ha 17 caratteri.
[SUGGERIMENTO: 1)è più facile stampare il rombo con due cicli,
  il primo per le righe in cui il numero di asterischi cresce
  e il secondo per le righe in cui il numero di asterischi diminuisce.]
[SUGGERIMENTO: 2) usate la funzione replicate2_line]
*/

void stampaCicloCrescente(int n) {
  for(int i = 0; i < n; i++){
    for(int j = 0; j < (2*n + 1); j++){
      if (j < n-i || j > n+i)
        std::cout << " ";
      else
        std::cout << "*";
    }
    std::cout << std::endl;
  }
}

void stampaCicloDecrescente(int n) {
  for(int i = n; i >= 0; i--){
    for(int j = 0; j < (2*n +1); j++){
      if (j < n-i || j > n+i)
        std::cout << " ";
      else
        std::cout << "*";
    }
    std::cout << std::endl;
  }
}

int main() {

  int n = 8;

  stampaCicloCrescente(n);
  stampaCicloDecrescente(n);

  return 0;
}
