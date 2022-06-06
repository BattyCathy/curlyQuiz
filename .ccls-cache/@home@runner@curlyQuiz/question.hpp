#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <nlohmann/json.hpp>

using namespace nlohmann;
using namespace std;

class Question {
string question;
string answer;
vector<string> wrongAnswers;
map<int, string> cipher;
json sonOfJason;


public:
Question(json sonOfJason);
~Question();
string category();
string difficulty();
bool ask();

};

