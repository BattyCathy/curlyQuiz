#include "quiz.hpp"
#include <fstream>
#include <string>
using namespace std; 



json Quiz::curlJSON(int numQuestions) {
  string fileName = "\" > data.txt";
  string num = to_string(numQuestions);
  string command = "curl \"https://opentdb.com/api.php?amount=" + num + fileName; 
	system(command.c_str());
  ifstream file;
  file.open("data.txt");
  json ret;
  file>>ret;
  system("rm data.txt");
  system("clear");
  return ret;
  
}
// void Quiz::printQuestion(/* json jason ,*/ int i) {
//  cout<<"Working"<<endl;
  
//   cout<<question<<endl;
  
// }


Quiz::Quiz(int numQuestions) {
  jason = Quiz::curlJSON(numQuestions);
  for (int i = 0; i < jason["results"].size(); i++) {
    json sonOfJason = jason["results"][i];
    Question q = Question(sonOfJason);
    questions.push_back(q);
    if (q.ask()) {
      //profile.insert({q.category(), profile[q.category()] + 1});
      profile[q.category()]++;
    } else {
      //profile.insert({q.category(), profile[q.category()] - 1});
      profile[q.category()]--;
    }
    cout<<profile[q.category()]<<endl;
    cout<<q.category()<<endl;
  }

  
  
  //printQuestion(/*jason,*/ 0);
  
}

Quiz::~Quiz() {
  
}
