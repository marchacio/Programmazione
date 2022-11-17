#include <iostream>

using namespace std;

/*
Scrivere una funzione con un argomento num di tipo intero che restituisce il numero di cifre (in base 10).
Ad esempio su 27458 restituisce 5.
*/

int n_cifre(int num){
  int cifre = 1;

  //distingui i casi possibili
  if(num >= 0){
    while((num / 10) > 0) {
      num /= 10;
      cifre++;
    }
  } else {
    while((num / 10) < 0) {
      num /= 10;
      cifre++;
    }
  }

  return cifre;
}

int main(){

  //Stampa il numero di cifre su console
  int numeroScelto = 27458;
  cout << "Cifre del numero " << numeroScelto << ": " << n_cifre(numeroScelto);

  return  0;
}
