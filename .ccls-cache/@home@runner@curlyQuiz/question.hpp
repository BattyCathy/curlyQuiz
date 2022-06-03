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

public:
Question(int i, json jason);
~Question();
};

