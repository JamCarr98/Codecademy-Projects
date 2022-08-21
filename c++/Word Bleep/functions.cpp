#include <string>
#include <vector>
#include <iostream>

void bleep(std::string word, std::string &text){
  std::vector<std::string> tempText;
  std::string newWord;
  
  for (int i = 0; i < text.size(); i++){
    if (text[i] == ' '){
      tempText.push_back(newWord);
      newWord = "";
    }
    else if(i == text.size() - 1){
      newWord += text[i];
      tempText.push_back(newWord);
      newWord= "";
    }
    else{
      newWord += text[i];
    }
  }

  for (int i = 0; i < tempText.size(); i ++){
    if (word == tempText[i]){
      tempText[i] = "********";
    }
    newWord += tempText[i] +' ';
  }
  text= newWord;
}
