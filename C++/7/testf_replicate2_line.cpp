#include <iostream>

/*
Scrivere una funzione replicate2_line con parametri f, f_c, s, s_c, dove f e s sono di tipo intero e f_c e s_c di tipo carattere.
La funzione stampa su una riga a sé stante f volte f_c, seguito da s volte s_c. Ad esempio replicate2_line(3, 's', 7, 'q')
stampa
sssqqqqqqq
*/

void replicate2_line(int f, char f_c, int s, char s_c){
  for(int i = 0; i < f; ++i)
    std::cout << f_c;

  for(int i = 0; i < s; ++i)
    std::cout << s_c;
}

int main() {

  replicate2_line(3, 's', 7, 'q');

  return 0;
}
