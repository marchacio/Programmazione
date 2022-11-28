#include <iostream>
#include "d_array.h"

void read_d_array(dynamic_array& d) {
  // definire una variabile intera s a un valore negativo
  /* finché s non è strettamente positiva....
      // stampare "Inserisci la dimensione del vettore" e andare a capo
      // leggere s
  */
  // assegnare s al campo size di d
  // allocare s interi assegnando l'area di memoria riservata al campo store di d
  /* iterare s volte....
      // stampare "inserisci un valore"
      // leggere un valore nell'i-esimo elemento del campo store di d...
      // ...usando la notazione con le quadre per accedervi
  */

  int s = -1;

  while(s <= 0){
    std::cout << "Inserisci la dimensione del vettore:\n";
    std::cin >> s;
  }

  d.size = s;
  d.store = new int[s];

  for(int i = 0; i < s; ++i){
    std::cout << "Inserisci un valore: ";
    std::cin >> d.store[i];
  }
}

void print_d_array(const dynamic_array& d) {
  // definire un puntatore p e inizializzarlo con il campo array di d
  // usando l'aritmetica dei puntatori su p per visitare il campo store di d...
  // ...stampare gli elementi del campo store di d, ...
  // ...ciascuno seguito dal carattere '\t'
  // stampare una andata a capo
  int* p = d.store;

  for(unsigned int i = 0; i < d.size; ++i)
    std::cout << p[i] << "\t";

  std::cout << "\n";
}
