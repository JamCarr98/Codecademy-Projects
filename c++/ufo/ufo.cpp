#include <iostream>
#include "ufo_functions.hpp"

int main() {
  std::string codeword = "codecademy";
  std::string answer = "__________";
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  char letter;
  //Calls the functions that prints the greeting
  greet();
  
  while (codeword != answer && misses < 7){
    display_misses(misses);
    display_status(incorrect, answer);
    std::cout << "Please enter your guess: ";
    std::cin >> letter;
    for (int i = 0; i < codeword.size(); i++){
      if (letter == codeword[i]){
        answer[i] = letter;
        guess = true;
      }
    }
    if (guess == true){
      std::cout << "Correct!\n";
    }
    else{
      std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses += 1;
    }
    guess = false;
  }
  
  end_game(codeword, answer);
}
