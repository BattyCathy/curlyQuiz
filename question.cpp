#include "question.hpp"
#include <algorithm>

using namespace std;
string Question::category() {
  string cat = sonOfJason["category"];
  return cat;
}

string Question::difficulty() {
  string dif = sonOfJason["difficulty"];
  return dif;
}

Question::Question(json sonOfJason) {
  Question::sonOfJason = sonOfJason;
  question = sonOfJason["question"];

  answer = sonOfJason["correct_answer"];
  cout<<question/*<<"\n\n"<<answer<<"\n\n"*/<<endl;
  for (int i = 0; i < sonOfJason["incorrect_answers"].size(); i++) {
    wrongAnswers.push_back(sonOfJason["incorrect_answers"][i]);
  }

  cout<<"\n"<<endl;
}

Question::~Question() {
  
}

bool Question::ask() {
  wrongAnswers.push_back(answer);
  random_shuffle(wrongAnswers.begin(), wrongAnswers.end());
  int i = 1;
  for (string answer : wrongAnswers) {
    cipher[i] = answer;
    i++;
  }
  int j = 1;
  while (j < i) {
    cout<<j<<") "<<cipher[j]<<endl;
    j++;
  }
  int guess;
  cin>>guess;
  while (guess < 1 || guess > j - 1) {
    cout<<"Invalid: try again."<<endl;
    cin>>guess;
  }
  if (cipher[guess] == answer) {
    cout<<"Correct!"<<endl;
    return true;
  } else {
    cout<<"Wrong. The correct answer was "<<answer<<endl; 
    return false;
  }
}