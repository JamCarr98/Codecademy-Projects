#include <iostream>

int main() {
  double pesos, reais, soles, dollars;
  
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  dollars = (pesos * 0.00032) + (reais * 0.27) + (soles * 0.3);

  std::cout << "US Dollars = $" << dollars <<"\n";
}
