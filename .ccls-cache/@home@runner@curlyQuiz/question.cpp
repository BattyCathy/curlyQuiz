#include "question.hpp"

Question::Question(int questionNum, json jason) {
  
  question = jason["results"][questionNum]["question"];

  
  answer = jason["results"][questionNum]["correct_answer"];
  cout<<question<<"\n\n"<<answer<<"\n\n"<<endl;
  for (int i = 0; i < jason["results"][questionNum]["incorrect_answers"].size(); i++) {
    wrongAnswers.push_back(jason["results"][questionNum]["incorrect_answers"][i]);
  }
  for (int i = 0; i < wrongAnswers.size(); i++) {
    cout<<wrongAnswers[i]<<endl;
  }
  //cout<<wrongAnswers[0]<<endl;
  
}

Question::~Question() {
  
}
