#include <iostream>
#include <stdlib.h>

int main(){
  srand(time(NULL));

  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "Shoot! ";
  std::cin >> user;

  std::cout << "Computer: " << computer << "\n";
  switch (user){
    case 1:
      if (computer == 1){
        std::cout << "Draw\n";
      }
      else if(computer == 2){
        std::cout << "Computer Wins\n";
      }
      else{
        std::cout << "You win!\n";
      }
      break;
    case 2:
      if (computer == 1){
        std::cout << "You Win!\n";
      }
      else if(computer == 2){
        std::cout << "Draw\n";
      }
      else{
        std::cout << "Computer Wins\n";
      }
      break;
    case 3:
      if (computer == 1){
        std::cout << "Computer Wins\n";
      }
      else if(computer == 2){
        std::cout << "You Win!\n";
      }
      else{
        std::cout << "Draw\n";
      }
      break;
    default:
      std::cout << "Invalid Input\n";
      break;
  }
}
