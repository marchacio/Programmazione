#include <iostream>
#include "d_array.h"

//Crea un array leggendo valori da input
void read_d_array(dynamic_array& d) {
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

//Stampa tutti gli elementi dell'array
void print_d_array(const dynamic_array& d) {
  int* p = d.store;

  for(unsigned int i = 0; i < d.size; ++i)
    std::cout << p[i] << "\t";

  std::cout << "\n";
}

//Svuota un array: array.size verrà impostata su 0 e verrà cancellato il riferimento in memoria
void delete_d_array(dynamic_array& d) {
  //Controlla che l'array dinamico sia cancellabile
  const std::string err = "Dimensione dell'array troppo piccola per poterlo cancellare";
  if(d.size <= 0) throw err;

  d.size = 0;
  delete [] d.store;
}
