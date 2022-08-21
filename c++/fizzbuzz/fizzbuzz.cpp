#include <iostream>

int main(){
  int a = 3, b = 5;
  for (int i = 1; i <= 100; i++){
    if (i % a == 0 && i % b == 0){
      std::cout << "Fizzbuzz\n";
    }
    else if (i % a == 0){
      std::cout << "Fizz\n";
    }
    else if (i % b == 0){
      std::cout << "Buzz\n";
    }
    else{
      std::cout << i << "\n";
    }
  }
}
