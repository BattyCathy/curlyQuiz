#include <iostream>
#include <bits/stdc++.h>
#include <nlohmann/json.hpp>
#include <vector>

using namespace std;
using namespace nlohmann;

class Quiz {
protected:
json jason;
string question;
string answer;
vector<string> wrongAnswers;
map<int, string> cipher;
public:
Quiz();
~Quiz();
//void printQuestion(/*json jason,*/ int i);
json curlJSON();
};