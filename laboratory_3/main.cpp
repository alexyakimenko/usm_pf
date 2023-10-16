#include <iostream>
using namespace std;

int main() {
  string 
    inputStr,
    resultStr = "",
    word = "";

  getline(cin, inputStr);
  inputStr += " ";

  for(int i=0; i < inputStr.size(); i++) {
    if(inputStr[i] != ' ') {
      word += inputStr[i];
      continue;
    }

    if(word.size() <= 6) {
      resultStr += word + " ";
    }

    word = "";
  }

  cout << inputStr << endl;
  cout << resultStr << endl;
  return 0;
}

