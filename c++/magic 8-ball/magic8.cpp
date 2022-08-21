#include <iostream>
#include <cstdlib>

int main(){
  std::cout << "Magic 8-Ball:\n";

  srand(time(NULL));
  int answer = std::rand() % 10;

  switch(answer){
    case 0:
      std::cout << "It is certain.\n";
      break;
    case 1:
      std::cout << "Very doubtful.\n";
      break;
    case 2:
      std::cout << "It is decidedly so.\n";
      break;
    case 3:
      std::cout << "Without a doubt.\n";
      break;
    case 4:
      std::cout << "Yes - definitely.\n";
      break;
    case 5:
      std::cout << "Ask again later\n";
      break;
    case 6:
      std::cout << "Signs point to yes\n";
      break;
    case 7:
      std::cout << "My reply is no\n";
      break;
    case 8:
      std::cout << "My sources say no\n";
      break;
    case 9:
      std::cout << "Most likely\n";
      break;
  }
}
