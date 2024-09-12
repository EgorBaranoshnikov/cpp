//пример использования функции div
#include <iostream>
#include <cstdlib>
 
int main()
{
  div_t divresult;
  divresult = div(38,5); // первый аргумент делим на второй и получаем два целых значения
  std::cout << "38 div 5 =>nцелая часть = " << divresult.quot
            << "nостаток = "                << divresult.rem;
  return 0;
}