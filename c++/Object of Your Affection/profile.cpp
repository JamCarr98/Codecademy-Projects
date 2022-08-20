#include "profile.hpp"
#include <iostream>
#include <vector>
Profile::Profile(std::string newName, int newAge, std::string newCity, std::string newCountry, std::string newPronouns){
  name = newName;
  age = newAge;
  city = newCity;
  country = newCountry;
  pronouns = newPronouns;
}

std::string Profile::viewProfile(){
  std::string bio;
  bio += "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nPronouns: " + pronouns;
  bio += "\nHobbies: ";
  for (int i = 0; i < hobbies.size(); i++){
    bio += hobbies[i] + ", ";
  }
  return bio;
}

void Profile::addHobby(std::string newHobby){
  hobbies.push_back(newHobby);
}
