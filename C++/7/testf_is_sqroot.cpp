#include <iostream>
#include <cmath>

/*
Scrivere una funzione con due argomenti reali x e sqrt_x che restituisce un valore booleano, true se sqrt_x è la radice
quadrata di x, ovvero se il quadrato di sqrt_x coincide con x.
Per testare la funzione usate come dati 25.3268614564 la cui radice quadrata è 5.03258
  (se preferite altri valori, vi conviene partire da un numero con cifre decimali e farne il quadrato,
  in modo da evitare errori di approssimazione dovuti ai troncamenti).
*/

bool funct(float x, float sqrt_x){
  return std::fabs(sqrt_x*sqrt_x - x) < 0.0001;
}

int main() {

  std::cout << std::boolalpha << funct(25.3268614564, 5.03258);

  return 0;
}
