#include "quiz.hpp"
#include <fstream>
#include <string>
using namespace std; 


json Quiz::curlJSON() {
  std::cout << "Test Reading JSON Data Containing Many Questions\n";

	system("curl \"https://opentdb.com/api.php?amount=10&category=19\" > data.txt");

  ifstream file;
  file.open("data.txt");
  json ret;
  file>>ret;
  system("rm data.txt\n");
  system("clear\n");
  return ret;
  
}
// void Quiz::printQuestion(/* json jason ,*/ int i) {
//  cout<<"Working"<<endl;
  
//   cout<<question<<endl;
  
// }


Quiz::Quiz() {
  jason = Quiz::curlJSON();
  question = jason["results"][0]["question"];
  answer = jason["results"][0]["correct_answer"];
  cout<<question<<"\n"<<answer<<endl;
  
  //printQuestion(/*jason,*/ 0);
  
}

Quiz::~Quiz() {
  
}
