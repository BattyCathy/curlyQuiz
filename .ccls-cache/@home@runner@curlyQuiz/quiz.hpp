#include <iostream>
#include <bits/stdc++.h>
#include <nlohmann/json.hpp>
#include <vector>
#include "question.hpp"

using namespace std;
using namespace nlohmann;

class Quiz {
protected:
json jason;
vector<Question> questions;
public:
Quiz(int numQuestions);
~Quiz();
//void printQuestion(/*json jason,*/ int i);
json curlJSON(int numQuestions);
};